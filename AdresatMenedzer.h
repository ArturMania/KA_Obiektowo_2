#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"


using namespace std;

class AdresatMenedzer {

    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    int pobierzIdNowegoAdresata();
    int pobierzIdOstatniegoAdresata();
    int pobierzidZalogowanegoUzytkownika();

public:
    //AdresatMenedzer(string nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami) {};
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wypiszWszystkichAdresatow();
    void wczytajAdresatowZPliku();


};
