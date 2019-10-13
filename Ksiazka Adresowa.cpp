#include "Ksiazka Adresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatMenedzer->usunAdresata();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::dodajAdresata()
{
      if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
      {
          adresatMenedzer->dodajAdresata();
      }
      else
      {
          cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
          system ("pause");
      }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;
    MetodyPomocnicze metodyPomocnicze;
    while (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = metodyPomocnicze.wczytajZnak();
                   switch (wybor)
            {
            case '1':
                dodajAdresata();
                break;
            case '2':
                ;
                break;
            case '3':
                ;
                break;
            case '4':
                wyswietlWszystkichAdresatow();
                break;
            case '5':
                usunAdresata();
                break;
            case '6':
                ;
                break;
            case '7':
                zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                wylogowanieUzytkownika();
            }
    }
    return 0;
}


