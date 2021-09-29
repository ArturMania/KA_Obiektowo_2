#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;


class MetodyPomocnicze {

public:

//STWORZENIE METODY STATYCZNEJ:
   static string konwerjsaIntNaString(int liczba);
   static int konwersjaStringNaInt(string liczba);
   static string wczytajLinie();
   static char wczytajZnak();
   static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
   static void zmienNazwePliku(string staraNazwa,string nowaNazwa);
   static void usunPlik(string nazwaPliku);
};
#endif
