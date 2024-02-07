#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"

using namespace std;

int main() {
    cout << "Testataan Asunto-luokkaa:" << endl;
    Asunto a1, a2, a3, a4;

    cout << "\nTestataan Kerros-luokkaa:" << endl;
    Kerros k1(4);
    k1.maarita();

    cout << "\nTestataan Katutaso-luokkaa:" << endl;
    Katutaso kt(2);
    kt.maarita();

    cout << "\nTestataan Kerrostaloa:" << endl;
    Kerros k2(4);
    Katutaso kt2(2);

    cout << "maaritellaan koko kerrostalon kaikki asunnot" << endl;

    k2.maarita();
    kt2.maarita();

    cout << "Kerrostalon kulutus = " << k2.getKulutus(1) + kt2.getKulutus(1) << endl;

    return 0;
}
