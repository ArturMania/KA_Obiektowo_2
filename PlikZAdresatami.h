#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;
class PlikZAdresatami {

    int idZalogowanegoUzytkownika;
    string nazwaPlikuZAdresatami;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

public:
    PlikZAdresatami();
    //PlikZAdresatami(string NAZWAPLIKUZADRESATAMI): nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {};

    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZPliku();

};

