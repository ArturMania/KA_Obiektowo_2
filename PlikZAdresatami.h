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
    int idZalogowanegoUzytkownika;
    //int idOstatniegoAdresata;


    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

public:
    PlikZAdresatami();
    //PlikZAdresatami(string NAZWAPLIKUZADRESATAMI): nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};


    //int pobierzIdOstatniegoAdresata(vector<Adresat>&adresaci);
    void dopiszAdresataDoPliku(Adresat adresat);
    bool czyPlikJestPusty();
    vector <Adresat> wczytajAdresatowZPliku();

};

