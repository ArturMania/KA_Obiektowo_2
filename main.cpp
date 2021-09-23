#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"


using namespace std;

int main() {
    //ZMIANA KONSTRUKTORA, MOZNA ZMIENIAC NAZWE PLIKU, BARDZIEJ UNIWERSALNE ROZWIAZANIE
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    //KsiazkaAdresowa ksiazkaAdresowa2("KsiazkaAdresowa.txt")
    //KsiazkaAdresowa ksiazkaAdresowa;
    ksiazkaAdresowa.wczytajUzytkownikowZPliku();
    ksiazkaAdresowa.wczytajAdresatowZPliku();

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    int idZalogowanegoUzytkownika=ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();

    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wylogowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika);
    ksiazkaAdresowa.wypiszWszystkichAdresatow();

//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
