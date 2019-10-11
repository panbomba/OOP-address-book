#include <iostream>
#include "Ksiazka Adresowa.h"

using namespace std;

int main()
{
    char wybor;
    KsiazkaAdresowa KsiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

        while (true)
    {
        system("cls");
        cout << "KSIAZKA ADRESOWA" << endl << endl;
        cout << "1. Rejestracja" << endl;
        cout << "2. Logowanie" << endl;
        cout << "3. Wyscie" << endl << endl;

        cout << endl << "Twoj wybor: ";
        cin >> wybor;

        if (wybor == '1')
        {
            system("cls");
            KsiazkaAdresowa.rejestracjaUzytkownika();
        }
        else if (wybor == '2')
        {
            system("cls");
            if (KsiazkaAdresowa.logowanieUzytkownika())
            {
                KsiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();
            }
        }
        else if (wybor == '3')
        {
            exit(0);
        }
    }

    //KsiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //KsiazkaAdresowa.logowanieUzytkownika();
    //KsiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //KsiazkaAdresowa.rejestracjaUzytkownika();
    //KsiazkaAdresowa.dodajAdresata();
    //KsiazkaAdresowa.wyswietlWszystkichAdresatow();
    //KsiazkaAdresowa.wylogowanieUzytkownika();



    return 0;
}
