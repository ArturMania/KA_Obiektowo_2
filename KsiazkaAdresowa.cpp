#include "KsiazkaAdresowa.h"

//UZYTKOWNIK
void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenedzer.wylogowanieUzytkownika();
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() {
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wczytajUzytkownikowZPliku() {
    uzytkownikMenedzer.wczytajUzytkownikowZPliku();
}

//ADRESAT
void KsiazkaAdresowa::wczytajAdresatowZPliku() {
    adresatMenedzer.wczytajAdresatowZPliku();
}

void KsiazkaAdresowa::dodajAdresata(int idZalogowanegoUzytkownika) {
    adresatMenedzer.dodajAdresata(idZalogowanegoUzytkownika);
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow() {
    adresatMenedzer.wypiszWszystkichAdresatow();
}
