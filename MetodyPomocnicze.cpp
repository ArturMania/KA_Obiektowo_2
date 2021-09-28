#include "MetodyPomocnicze.h"

string MetodyPomocnicze::konwerjsaIntNaString(int liczba) {
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

int MetodyPomocnicze::konwersjaStringNaInt(string liczba){
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

char MetodyPomocnicze::wczytajZnak(){
cin.sync();
char znak;
cin>>znak;
return znak;
}
