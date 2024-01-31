#include <iostream>
#include <string>

class Chef {
private:
    std::string name;

public:
    Chef(std::string chefName) : name(chefName) {
        std::cout << "Chef " << name << " constructor" << std::endl;
    }

    ~Chef() {
        std::cout << "Chef " << name << " destructor" << std::endl;
    }

    void makeSalad() {
        std::cout << name << " makes salad" << std::endl;
    }

    void makeSoup() {
        std::cout << name << " makes soup" << std::endl;
    }

    std::string getName() const {
        return name;
    }
};

class ItalianChef : public Chef {
private:
    int flour;
    int water;

public:
    ItalianChef(std::string chefName, int flourAmount, int waterAmount)
        : Chef(chefName), flour(flourAmount), water(waterAmount) {
        std::cout << "Italian Chef " << getName() << " constructor" << std::endl;
    }

    ~ItalianChef() {
        std::cout << "Italian Chef " << getName() << " destructor" << std::endl;
    }

    void makePasta() {
        std::cout << "Italian Chef " << getName() << " makes pasta with a secret recipe" << std::endl;
        std::cout << "Italian Chef " << this->getName() << " uses " << flour << " grams of flour." << std::endl;
        std::cout << "Italian Chef " << this->getName() << " uses " << water << " grams of water." << std::endl;
    }
};

int main() {
    Chef gordon("Gordon Ramsay");
    ItalianChef mario("Mario", 20, 200);

    gordon.makeSalad();
    gordon.makeSoup();

    mario.makeSalad();
    mario.makePasta();
    mario.makeSoup();

    return 0;
}
