#include <iostream>
#include "building.h"

using namespace std;

int main() {
    Building building;

    cout << "Building total consumption is " << building.calculateConsumption(1) << endl;
    return 0;
}
