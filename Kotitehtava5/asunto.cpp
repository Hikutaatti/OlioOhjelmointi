#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto() {
    asukkaita = 2;
    nelioita = 100;
    cout << "asunto luotu" << endl;
}

Asunto::~Asunto() {
}

void Asunto::maarita() {
    cout << "Asunto maaritetty asukkaita=" << asukkaita << " nelioita=" << nelioita << endl;
}

int Asunto::getKulutus(int hinta) {
    return asukkaita * hinta;
}
