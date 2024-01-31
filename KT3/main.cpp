#include "Chef.h"
#include "ItalianChef.h"

int main() {
    Chef jyrki("Jyrki");
    jyrki.makeSalad();
    jyrki.makeSoup();

    ItalianChef mario("Mario");
    mario.makePasta();
    mario.makeSoup();
    mario.makePastaWithSpecialRecipe();

    return 0;
}

