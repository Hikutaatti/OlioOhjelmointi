#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int arvaaLuku(int oikeaLuku) {
    int arvaus;
    do {
        // Kysy pelaajalta arvaus
        cout << "Arvaa luku (0-20): ";
        cin >> arvaus;

        // Tarkista onko arvaus oikein ja anna palautetta
        if (arvaus < oikeaLuku) {
            cout << "Luku on suurempi." <<endl;
        } else if (arvaus > oikeaLuku) {
            cout << "Luku on pienempi." <<endl;
        } else {
            cout << "Oikein! Onneksi olkoon!" <<endl;
        }

    } while (arvaus != oikeaLuku);

    return arvaus;
}

int main() {
    // Aseta satunnaislukugeneraattorin siemen
    srand(time(0));

    // Arvo satunnainen luku väliltä 0-20
    int oikeaLuku = rand() % 21;

    cout << "Tervetuloa arvauspeliin! Arvaa luku väliltä 0-20." <<endl;

    // Kutsu arvausfunktiota ja anna oikea luku parametrina
    arvaaLuku(oikeaLuku);

    return 0;
}
