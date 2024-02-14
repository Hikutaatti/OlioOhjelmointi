// Kerros.h

#ifndef KERROS_H
#define KERROS_H

#include "Asunto.h"

class Kerros {
private:
    Asunto **asunnot;
    int koko;
public:
    Kerros(int k);
    ~Kerros();
    void maarita();
    int getKoko() const; // Lisätty metodi
    Asunto** getAsunnot() const; // Lisätty metodi
    int getKulutus(int hinta);
};

#endif // KERROS_H
