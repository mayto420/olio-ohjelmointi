#ifndef FLOOR_H
#define FLOOR_H

#include "apartment.h"

class Floor {
    Apartment* apt1;
    Apartment* apt2;
    Apartment* apt3;
    Apartment* apt4;
public:
    Floor();
    ~Floor();
    virtual void defineApts();
    virtual double calculateConsumption(double);
};

#endif // FLOOR_H
