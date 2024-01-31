#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
private:
    int grains; // Secret pasta recipe ingredient
    int water;  // Secret pasta recipe ingredient

public:
    ItalianChef(std::string chefName);

    ~ItalianChef();

    std::string getName();

    void makePasta();

    void makePastaWithSpecialRecipe();
};

#endif // ITALIAN_CHEF_H
