#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H


#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;
class PlikZAdresatami {

    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOdzielonychPionowymiKreskami(string daneJednegoAdresataOdzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOdzielonychPionowymiKreskami(string daneJednegoAdresataOdzielonePionowymiKreskami);
    int zwrocNumerLiniiSzukanegoAdresata(int idAdresata);
    void zmienNazwePliku(string staraNazwa,string nowaNazwa);
    void usunPlik(string nazwaPliku);

public:
    PlikZAdresatami(string nazwaPlikuZAdresatami): NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        idOstatniegoAdresata=0;
    };

    void usunWybranaLinieWPliku(int idAdresata);
    void edytujWybranaLinieWPliku(Adresat adresat);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZPliku();
    vector<Adresat>wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();

};

#endif
