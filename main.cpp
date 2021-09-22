#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"


using namespace std;

int main() {
    //ZMIANA KONSTRUKTORA, MOZNA ZMIENIAC NAZWE PLIKU, BARDZIEJ UNIWERSALNE ROZWIAZANIE
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    //KsiazkaAdresowa ksiazkaAdresowa2("KsiazkaAdresowa.txt")

    ksiazkaAdresowa.wczytajAdresatowZPliku();

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wylogowanieUzytkownika();

    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();

//ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
