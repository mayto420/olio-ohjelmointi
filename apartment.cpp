#include "apartment.h"
#include <iostream>

using namespace std;

Apartment::Apartment() {
    cout << "Apartment created" << endl;
    residents = nullptr;
    area = nullptr;
}

Apartment::~Apartment() {
    delete residents;
    delete area;
    cout << "Apartment destroyed" << endl;
}

void Apartment::setParameters(int r, int a) {
    residents = new int(r);
    area = new int(a);
    cout << "Apartment population is " << *residents << " people and the apartment area is " << *area << " square meters." << endl;
}

double Apartment::calculateConsumption(double p) {
    return p * (*residents) * (*area);
}
