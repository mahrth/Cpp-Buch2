#pragma once
#include <cmath>
#include <ostream>

struct Vektor final{
	float x, y;
	explicit Vektor(float x=0, float y=0) : x{x}, y{y} {}
	Vektor(const Vektor& v) : x{v.x}, y{v.y} {}
	virtual ~Vektor()  = default;
	Vektor& operator=(const Vektor& v) {
		x = v.x; y = v.y;
		return *this;
	}
	Vektor operator+(const Vektor& v) const {
		return Vektor(x+v.x, y+v.y);
	}
	Vektor operator-(const Vektor& v) const {
		return Vektor(x-v.x, y-v.y);
	}
	Vektor& operator+=(const Vektor& v) {
		x += v.x; y += v.y;
		return *this;
	}
	Vektor& operator-=(const Vektor& v) {
		x -= v.x; y -= v.y;
		return *this;
	}
	Vektor& operator*=(float f) {
		x *= f; y *= f;
		return *this;
	}
	Vektor& operator/=(float f) {
		x /= f; y /= f;
		return *this;
	}
	friend Vektor operator*(const Vektor& v, float f) {
		return Vektor(v.x*f, v.y*f);
	}
	friend Vektor operator*(float f, const Vektor& v) {
		return Vektor(v.x*f, v.y*f);
	}
	float betrag() const { return std::sqrt(betragQuadrat()); }
	float abstand(const Vektor& v) const {
		return (*this - v).betrag();
	}
	float betragQuadrat() const { return x*x + y*y;	}
	float abstandQuadrat(const Vektor& v) const {
		return (*this-v).betragQuadrat();
	}
	friend std::ostream& operator<<(std::ostream& os, const Vektor& v) {
		os << "[" << v.x << "," << v.y << "]";
		return os;
	}
};






