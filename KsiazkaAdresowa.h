#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa {

    int izZalogowanegoUzytkownika;
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatMenedzer adresatMenedzer;
    PlikZAdresatami plikZAdresatami;

public:
    //LISTA INICJALIZACYJNA-PRZESY£ANIE STA£EJ NAZWY PLIKU POMIEDZY KLASAMI
    //W CIELE KONSTRUKTORA ZOSTALA METODA NA WCZYTYWANIE UZYTKOWNIKOW
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami) {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
    };

    //KsiazkaAdresowa(string nazwaPlikuZAdresatami) : adresatMenedzer(nazwaPlikuZAdresatami) {
    //adresatMenedzer.wczytajAdresatowZPliku();
    //};

    int logowanieUzytkownika();
    int pobierzIdZalogowanegoUzytkownika();
    void wczytajUzytkownikowZPliku();
    void rejestracjaUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wylogowanieUzytkownika();

    int idZalogowanegoUzytkownika();
    void wczytajAdresatowZPliku();
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wypiszWszystkichAdresatow();
};
