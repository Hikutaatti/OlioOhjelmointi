#ifndef KERROS_H
#define KERROS_H

#include "Asunto.h"

class Kerros {
private:
    Asunto *asunnot;
    int koko;
public:
    Kerros(int k);
    ~Kerros();
    void maarita();
    int getKoko() const; // Julkinen getter koolle
    Asunto* getAsunnot() const; // Julkinen getter asunnoille
    int getKulutus(int hinta);
};

#endif // KERROS_H
