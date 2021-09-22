#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
public:
    //LISTA INICJALIZACYJNA-PRZESY£ANIE STA£EJ NAZWY PLIKU POMIEDZY KLASAMI
    //W CIELE KONSTRUKTORA ZOSTALA METODA NA WCZYTYWANIE UZYTKOWNIKOW
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami) {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };
    //KsiazkaAdresowa(string nazwaPlikuZAdresatami) : AdresatMenedzer(nazwaPlikuZAdresatami) {
    //    AdresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    //};

    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wylogowanieUzytkownika();
};
