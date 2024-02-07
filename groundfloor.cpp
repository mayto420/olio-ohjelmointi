#include "groundfloor.h"
#include <iostream>

using namespace std;

GroundFloor::GroundFloor() {
    cout << "Ground floor created" << endl;
}

GroundFloor::~GroundFloor() {
    cout << "Ground floor destroyed" << endl;
}

void GroundFloor::defineApts() {
    this->apt1.setParameters(2, 100);
    this->apt2.setParameters(2, 100);

    cout << "Pohjakerrokseen m\x84\x84ritettiin 2 asuntoa" << endl;
}

double GroundFloor::calculateConsumption(double p) {
    return this->apt1.calculateConsumption(p)
           + this->apt2.calculateConsumption(p);
}
