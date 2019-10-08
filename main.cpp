#include <iostream>
#include "Ksiazka Adresowa.h"


using namespace std;

int main()
{
    int idZalogowanegoUzytkownika = 0;
   KsiazkaAdresowa KsiazkaAdresowa("Uzytkownicy.txt");



   KsiazkaAdresowa.wypiszWszystkichUzytkownikow();
   //idZalogowanegoUzytkownika = KsiazkaAdresowa.logowanieUzytkownika();
   //KsiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
   //KsiazkaAdresowa.rejestracjaUzytkownika();
   //KsiazkaAdresowa.rejestracjaUzytkownika();
   KsiazkaAdresowa.wypiszWszystkichUzytkownikow();


    return 0;
}
