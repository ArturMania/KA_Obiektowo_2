#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"


using namespace std;

int main() {
    //ZMIANA KONSTRUKTORA, MOZNA ZMIENIAC NAZWE PLIKU, BARDZIEJ UNIWERSALNE ROZWIAZANIE
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");

    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    //ksiazkaAdresowa.wylogowanieUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
