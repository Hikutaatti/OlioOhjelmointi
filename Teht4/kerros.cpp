#include "Kerros.h"
#include <iostream>
using namespace std;

Kerros::Kerros(int k) {
    koko = k;
    asunnot = new Asunto[k];
    cout << "kerros luotu" << endl;
}

Kerros::~Kerros() {
    delete[] asunnot;
}

void Kerros::maarita() {
    for (int i = 0; i < koko; ++i) {
        asunnot[i].maarita();
    }
}

int Kerros::getKoko() const {
    return koko;
}

Asunto* Kerros::getAsunnot() const {
    return asunnot;
}

int Kerros::getKulutus(int hinta) {
    int summa = 0;
    for (int i = 0; i < koko; ++i) {
        summa += asunnot[i].getKulutus(hinta);
    }
    return summa;
}
