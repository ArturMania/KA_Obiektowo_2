#include <iostream>

using namespace std;

class Uzytkownik{
    int id;
    string login;
    string haslo;
public:
    //"GETERY I CHECKERY"
    void ustawID(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzId();
    string pobierzLogin();
    string pobierzHaslo();
};
