#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H

#include <iostream>
#include <fstream>

using namespace std;

class PlikTekstowy{
    const string NAZWA_PLIKU;

public:
   string pobierzNazwePliku();
   bool czyPlikJestPusty(string nazwaPliku);

};
#endif
