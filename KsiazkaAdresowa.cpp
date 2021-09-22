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

//ADRESAT
void KsiazkaAdresowa::wczytajAdresatowZPliku() {
    adresatMenedzer.wczytajAdresatowZPliku();
}

void KsiazkaAdresowa::dodajAdresata() {
    adresatMenedzer.dodajAdresata();
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow() {
    adresatMenedzer.wypiszWszystkichAdresatow();
}
