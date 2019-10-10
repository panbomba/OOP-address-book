#include <iostream>
#include "Ksiazka Adresowa.h"


using namespace std;

int main()
{

    KsiazkaAdresowa KsiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    KsiazkaAdresowa.wypiszWszystkichUzytkownikow();
    KsiazkaAdresowa.logowanieUzytkownika();
    //cout << uzytkownikMenedzer.idZalogowanegoUzytkownika;
    //KsiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //KsiazkaAdresowa.rejestracjaUzytkownika();
    //KsiazkaAdresowa.dodajAdresata();
    //KsiazkaAdresowa.wyswietlWszystkichAdresatow();
    KsiazkaAdresowa.wylogowanieUzytkownika();
    //cout << uzytkownikMenedzer.idZalogowanegoUzytkownika;


    return 0;
}
