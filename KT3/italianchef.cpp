#include "ItalianChef.h"

ItalianChef::ItalianChef(std::string chefName) : Chef(chefName), grains(250), water(100) {
    std::cout << "ItalianChef " << name << " constructor" << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef " << name << " destructor" << std::endl;
}

std::string ItalianChef::getName() {
    return name;
}

void ItalianChef::makePasta() {
    std::cout << "Chef " << name << " makes pasta" << std::endl;
}

void ItalianChef::makePastaWithSpecialRecipe() {
    std::cout << "Chef " << name << " makes pasta with special recipe" << std::endl;
    std::cout << "Chef " << name << " uses grains = " << grains << std::endl;
    std::cout << "Chef " << name << " uses water = " << water << std::endl;
}
