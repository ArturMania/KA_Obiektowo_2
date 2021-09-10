#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami {
    // TWORZENIE STA£EJ GLOBALNEJ, WYMAGA LISTY INICJALIZACYJNEJ, CZYLI SPECYFICZNEGO KONSTRUKTORA
    const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:
    //LISTA INICJALIZACYJNA, INNY RODZAJ "KONSTRUKTORA"
    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI): nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};

    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    //ZWRACANIE WEKTORA Z FUNKCJI
    vector<Uzytkownik> wczytajUzytkownikowZPliku();

};
