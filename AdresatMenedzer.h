#ifndef ADRESATMENEDZER_H
#define  ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;


    public:
    //AdresatMenedzer(string nazwaPlikuZUzytkownikami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    int dodajAdresata(vector <Adresat> &adresaci, int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);


};

#endif
