#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

#include "PlikTekstowy.h"
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami: public PlikTekstowy  {
    // TWORZENIE STA?EJ GLOBALNEJ, WYMAGA LISTY INICJALIZACYJNEJ, CZYLI SPECYFICZNEGO KONSTRUKTORA
    //const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;

    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    //LISTA INICJALIZACYJNA, INNY RODZAJ "KONSTRUKTORA"
    PlikZUzytkownikami(string nazwaPliku):PlikTekstowy(nazwaPliku){};
    //PlikZUzytkownikami(string nazwaPlikuZUzytkownikami): NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPlikuZUzytkownikami){};

    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    void zapiszWszystkichUzytkownikowDoPliku(vector<Uzytkownik>&uzytkownicy);

    //ZWRACANIE WEKTORA Z FUNKCJI
    vector<Uzytkownik> wczytajUzytkownikowZPliku();
};
#endif
