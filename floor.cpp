#include "floor.h"
#include <iostream>

using namespace std;

Floor::Floor() {
    cout << "Floor created" << endl;
    apt1 = new Apartment();
    apt2 = new Apartment();
    apt3 = new Apartment();
    apt4 = new Apartment();
}

Floor::~Floor() {
    cout << "Floor destroyed" << endl;
    delete apt1;
    delete apt2;
    delete apt3;
    delete apt4;
}

void Floor::defineApts() {
    apt1->setParameters(2, 100);
    apt2->setParameters(2, 100);
    apt3->setParameters(2, 100);
    apt4->setParameters(2, 100);

    cout << "4 apartments defined" << endl;
}

double Floor::calculateConsumption(double p) {
    return apt1->calculateConsumption(p)
           + apt2->calculateConsumption(p)
           + apt3->calculateConsumption(p)
           + apt4->calculateConsumption(p);
}
