#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer {

    int idOstatniegoAdresata;
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata();
    int pobierzIdNowegoAdresata();
    int pobierzIdOstatniegoAdresata();
public:
    //AdresatMenedzer(string nazwaPlikuZAdresatami):nazwaPlikuZAdresatami(nazwaPlikuZAdresatami) {};

    int dodajAdresata();
    void wypiszWszystkichAdresatow();

};
