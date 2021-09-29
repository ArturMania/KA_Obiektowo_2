#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa {

    UzytkownikMenedzer uzytkownikMenedzer;
//ZASTOSOWANIE WSKAZNIKA KLASY, ABY PRZESLAC ZMIENNA Z INNEJ KLASY
    AdresatMenedzer *adresatMenedzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    //LISTA INICJALIZACYJNA-PRZESY£ANIE STA£EJ NAZWY PLIKU POMIEDZY KLASAMI
    //W CIELE KONSTRUKTORA ZOSTALA METODA NA WCZYTYWANIE UZYTKOWNIKOW

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        adresatMenedzer=NULL;
    };
    ~KsiazkaAdresowa() {
        delete adresatMenedzer;
        adresatMenedzer=NULL;
    };
//Uzytkownik
    int logowanieUzytkownika();
    void rejestracjaUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wylogowanieUzytkownika();
    bool czyUzytkownikJestZalogowany();
//Adresat
    void dodajAdresata();
    void wypiszWszystkichAdresatow();
    void usunAdresata();
    void edytujAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
};
#endif
