#include "Katutaso.h"
#include <iostream>
using namespace std;

Katutaso::Katutaso(int k) : Kerros(k) {
    cout << "katutaso luotu" << endl;
}

Katutaso::~Katutaso() {
}

void Katutaso::maarita() {
    cout << "maaritetaan 2 kpl katutason asuntoja" << endl;
    int koko = getKoko();
    Asunto* asunnot = getAsunnot();
    for (int i = 0; i < koko; ++i) {
        asunnot[i].maarita();
    }
    cout << "maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
        for (int i = 0; i < koko; ++i) {
        asunnot[i].maarita(); // Kutsu Kerros-luokan asuntojen maarita-metodia
    }
}

int Katutaso::getKulutus(int hinta) {
    int summa = 0;
    int koko = getKoko();
    Asunto* asunnot = getAsunnot();
    for (int i = 0; i < koko; ++i) {
        summa += asunnot[i].getKulutus(hinta);
    }
    return summa;
}
