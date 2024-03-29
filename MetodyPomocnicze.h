#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
using namespace std;

class MetodyPomocnicze
{
public:
    static string konwerjsaIntNaString(int liczba);
    string wczytajLinie();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int konwersjaStringNaInt(string liczba);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    char wczytajZnak();
    int wczytajLiczbeCalkowita();
    int podajIdWybranegoAdresata();
    char wybierzOpcjeZMenuEdycja();
};

#endif
