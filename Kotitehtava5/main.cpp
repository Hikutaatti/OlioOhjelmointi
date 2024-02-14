#include <iostream>
#include "Kerros.h"
#include "Katutaso.h"

using namespace std;

int main() {
    cout << "Testataan Asunto-luokkaa:" << endl;
    Asunto a1, a2, a3, a4;

    cout << "\nTestataan Kerros-luokkaa:" << endl;
    Kerros* k1 = new Kerros(4);
    k1->maarita();

    cout << "\nTestataan Katutaso-luokkaa:" << endl;
    Katutaso* kt = new Katutaso(2);
    kt->maarita();

    cout << "\nTestataan Kerrostaloa:" << endl;
    Kerros* k2 = new Kerros(4);
    Katutaso* kt2 = new Katutaso(2);

    cout << "maaritellaan koko kerrostalon kaikki asunnot" << endl;

    k2->maarita();
    kt2->maarita();

    cout << "Kerrostalon kulutus = " << k2->getKulutus(1) + kt2->getKulutus(1) << endl;

    delete k1;
    delete kt;
    delete k2;
    delete kt2;

    return 0;
}
