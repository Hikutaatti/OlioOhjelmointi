// Kerros.cpp

#include "Kerros.h"
#include <iostream>
using namespace std;

Kerros::Kerros(int k) {
    koko = k;
    asunnot = new Asunto*[k];
    for (int i = 0; i < k; ++i) {
        asunnot[i] = new Asunto();
    }
    cout << "kerros luotu" << endl;
}

Kerros::~Kerros() {
    for (int i = 0; i < koko; ++i) {
        delete asunnot[i];
    }
    delete[] asunnot;
}

void Kerros::maarita() {
    for (int i = 0; i < koko; ++i) {
        asunnot[i]->maarita();
    }
}

int Kerros::getKulutus(int hinta) {
    int summa = 0;
    for (int i = 0; i < koko; ++i) {
        summa += asunnot[i]->getKulutus(hinta);
    }
    return summa;
}

int Kerros::getKoko() const { // Lisätty toteutus
    return koko;
}

Asunto** Kerros::getAsunnot() const { // Lisätty toteutus
    return asunnot;
}
