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

    string nazwaPlikuZAdresatami;
    fstream plikTekstowy;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;


    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

public:
    //PlikZAdresatami(string NAZWAPLIKUZADRESATAMI): nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};


    int pobierzIdOstatniegoAdresata();
    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZPliku();

};
#endif
