#include "floor.h"
#include <iostream>

using namespace std;

Floor::Floor() {
    cout << "Floor created" << endl;
}

Floor::~Floor() {
    cout << "Floor destroyed" << endl;
}

void Floor::defineApts() {
    this->apt1.setParameters(2, 100);
    this->apt2.setParameters(2, 100);
    this->apt3.setParameters(2, 100);
    this->apt4.setParameters(2, 100);

    cout << "Kerrokseen m\x84\x84ritettiin 4 asuntoa" << endl;
}

double Floor::calculateConsumption(double p) {
    return this->apt1.calculateConsumption(p)
           + this->apt2.calculateConsumption(p)
           + this->apt3.calculateConsumption(p)
           + this->apt4.calculateConsumption(p);
}
