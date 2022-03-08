#pragma once
#include "ofMain.h"
class Welt;

class ofApp: public ofBaseApp {
private:
	Welt* welt;
	float dt;
public:
	void setup() override;
	void update() override;
	void draw() override;
	void exit() override;
};
