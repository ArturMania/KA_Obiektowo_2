#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa {

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

    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wylogowanieUzytkownika();


    void wczytajAdresatowZPliku();
    void dodajAdresata();
    void wypiszWszystkichAdresatow();
};
