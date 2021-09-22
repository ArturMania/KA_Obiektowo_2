#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h""

using namespace std;

class AdresatMenedzer {

    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdNowegoAdresata();

public:
    //AdresatMenedzer(string nazwaPlikuZAdresatami):nazwaPlikuZAdresatami(nazwaPlikuZAdresatami) {};

    int dodajAdresata();
    void wyswietlDaneAdresata();

};
