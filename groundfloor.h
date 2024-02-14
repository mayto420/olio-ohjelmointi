#ifndef GROUNDFLOOR_H
#define GROUNDFLOOR_H

#include "floor.h"
#include "apartment.h"

class GroundFloor : public Floor {
    Apartment *apt1;
    Apartment *apt2;
public:
    GroundFloor();
    ~GroundFloor();
    void defineApts() override;
    double calculateConsumption(double) override;
};

#endif // GROUNDFLOOR_H
