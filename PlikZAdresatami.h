#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H


#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

#include "PlikTekstowy.h"
#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;
class PlikZAdresatami : public PlikTekstowy {

    // string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOdzielonychPionowymiKreskami(string daneJednegoAdresataOdzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOdzielonychPionowymiKreskami(string daneJednegoAdresataOdzielonePionowymiKreskami);

public:
    PlikZAdresatami(string nazwaPliku):PlikTekstowy(nazwaPliku){
    idOstatniegoAdresata=0;
    };
    //PlikZAdresatami(string NAZWA_PLIKU_Z_ADRESATAMI): PlikTekstowy(NAZWA_PLIKU_Z_ADRESATAMI) {
    //    idOstatniegoAdresata=0;
    //};

    void usunWybranaLinieWPliku(int idAdresata);
    void edytujWybranaLinieWPliku(Adresat adresat);
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZPliku();
    vector<Adresat>wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzIdOstatniegoAdresata();

};

#endif
