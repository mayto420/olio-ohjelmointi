#include "apartment.h"
#include <iostream>

using namespace std;

Apartment::Apartment() {
    cout << "Apartment created" << endl;
}

Apartment::~Apartment() {
    cout << "Apartment destroyed" << endl;
}

void Apartment::setParameters(int r, int a) {
    this->residents = r;
    this->area = a;
    cout << "Apartment population is " << r << " people and the apartment area is " << a << " square meters." << endl;
}

double Apartment::calculateConsumption(double p) {
    return p * this->residents * this->area;
}
