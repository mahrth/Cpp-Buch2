#pragma once

struct Bewegung {
    virtual ~Bewegung() {}
    virtual void bewegen(float dt) = 0;
};





