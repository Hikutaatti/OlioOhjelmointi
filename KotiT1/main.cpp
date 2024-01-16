#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    // Set RNG seed
    srand(time(0));

    //Gen a random number between 1-maxnum
    int nmbr = rand() % maxnum + 1;

    int arvaus;
    int arvaustenMaara = 0;

    do {
        // Kysy pelaajalta arvaus
        cout << "Guess the burgers (1-" << maxnum << "): ";
        cin >> arvaus;

        // Tarkista onko arvaus oikein ja anna palautetta
        if (arvaus < nmbr) {
            cout << "More burgers!" <<endl;
        } else if (arvaus > nmbr) {
            cout << "Less burgers." <<endl;
        } else {
            cout << "Congratulations! You got the burgers!" <<endl;
        }

        arvaustenMaara++;

    } while (arvaus != nmbr);

    return arvaustenMaara;
}

int main() {
    // Kysy pelaajalta korkein arvattava luku
    int maxnum;
    cout << "Enter the max burgers to cook: ";
    cin >> maxnum;

    // Kutsu game-funktiota ja tulosta arvausten määrä
    int arvaustenMaara = game(maxnum);

    cout << "You cooked this many times: " << arvaustenMaara <<endl;

    return 0;
}
