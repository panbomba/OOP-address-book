#ifndef PLIKTEKSTOWY_H
#define  PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy {



    public:

        PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }
    const string NAZWA_PLIKU;
    string pobierzNazwePliku();
    bool czyPlikJestPusty(fstream &plikTekstowy);
};

#endif
