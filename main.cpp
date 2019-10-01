#include <iostream>
#include "Ksiazka Adresowa.h"


using namespace std;

int main()
{
   KsiazkaAdresowa KsiazkaAdresowa("Uzytkownicy.txt");

   KsiazkaAdresowa.wypiszWszystkichUzytkownikow();
   KsiazkaAdresowa.rejestracjaUzytkownika();
   KsiazkaAdresowa.rejestracjaUzytkownika();
   KsiazkaAdresowa.wypiszWszystkichUzytkownikow();


    return 0;
}
