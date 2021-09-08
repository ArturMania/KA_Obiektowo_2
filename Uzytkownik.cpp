#include <iostream>
#include "Uzytkownik.h"

using namespace std;

//MOZNA USTAWIC WARUNKI DLA KAZDEGO ATRYBUTU, WSTEPNE SPRAWDZANIE
void Uzytkownik::ustawID(int noweId) {
    if(noweId>=0)
        id=noweId;
}
void Uzytkownik::ustawLogin(string nowyLogin) {
    login=nowyLogin;
}
void Uzytkownik::ustawHaslo(string noweHaslo) {
    haslo=noweHaslo;
}

int Uzytkownik::pobierzId() {
    return id;
}
string Uzytkownik::pobierzLogin() {
    return login;
}
string Uzytkownik::pobierzHaslo() {
    return haslo;
}
