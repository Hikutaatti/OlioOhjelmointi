#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
protected:
    int asukkaita;
    int nelioita;
public:
    Asunto();
    virtual ~Asunto();
    virtual void maarita();
    int getKulutus(int hinta);
};

#endif // ASUNTO_H

