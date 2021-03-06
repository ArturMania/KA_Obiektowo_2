#include "MetodyPomocnicze.h"

string MetodyPomocnicze::konwerjsaIntNaString(int liczba) {
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba) {
    int liczbaInt;
    istringstream iss(liczba);
    iss>>liczbaInt;
    return liczbaInt;
}

string MetodyPomocnicze::wczytajLinie() {
    cin.sync();
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

char MetodyPomocnicze::wczytajZnak() {
    cin.sync();
    char znak;
    cin>>znak;
    return znak;
}

string MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst)
{
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}

void MetodyPomocnicze::zmienNazwePliku(string staraNazwa,string nowaNazwa) {
    rename(staraNazwa.c_str(),nowaNazwa.c_str());
}
void MetodyPomocnicze::usunPlik(string nazwaPliku) {
    remove(nazwaPliku.c_str());
}
