#include "groundfloor.h"
#include <iostream>

using namespace std;

GroundFloor::GroundFloor() {
    cout << "Ground floor created" << endl;

    apt1 = new Apartment();
    apt2 = new Apartment();
}

GroundFloor::~GroundFloor() {
    cout << "Ground floor destroyed" << endl;

    delete apt1;
    delete apt2;
}

void GroundFloor::defineApts() {

    apt1->setParameters(2, 100);
    apt2->setParameters(2, 100);

    cout << "2 apartments defined on ground floor" << endl;
}

double GroundFloor::calculateConsumption(double p) {

    return apt1->calculateConsumption(p) + apt2->calculateConsumption(p);
}
