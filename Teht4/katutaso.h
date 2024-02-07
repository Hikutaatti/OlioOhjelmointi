#ifndef KATUTASO_H
#define KATUTASO_H

#include "kerros.h"

class Katutaso : public Kerros {
public:
    Katutaso(int k);
    ~Katutaso();
    void maarita();
    int getKulutus(int hinta);
};

#endif // KATUTASO_H
