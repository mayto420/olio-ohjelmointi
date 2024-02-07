#include "building.h"
#include <iostream>

using namespace std;

Building::Building() {
    this->first.defineApts();
    this->second.defineApts();
    this->third.defineApts();
    cout << "Building created" << endl;
}

Building::~Building() {
    cout << "Building destroyed" << endl;
}

double Building::calculateConsumption(double p) {
    return this->first.calculateConsumption(p)
           + this->second.calculateConsumption(p)
           + this->third.calculateConsumption(p);
}
