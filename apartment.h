#ifndef APARTMENT_H
#define APARTMENT_H

class Apartment {
    int* residents;
    int* area;
public:
    Apartment();
    ~Apartment();
    void setParameters(int, int);
    double calculateConsumption(double);
};

#endif // APARTMENT_H
