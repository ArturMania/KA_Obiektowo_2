#include "AdresatMenedzer.h"

using namespace std;


Adresat AdresatMenedzer::podajDaneNowegoAdresata() {
    Adresat adresat;
    adresat.ustawId(plikZAdresatami.pobierzIdOstatniegoAdresata()+1);
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    system("cls");
    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

int AdresatMenedzer::pobierzIdNowegoAdresata() {

    if (adresaci.empty() == true)
        return 1;
    else
        return adresaci.back().pobierzId() + 1;
}

void AdresatMenedzer::dodajAdresata() {
    Adresat adresat;
    system("cls");
    cout<<endl<<"ID Uzytkownika: "<<ID_ZALOGOWANEGO_UZYTKOWNIKA<<endl;
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    if(plikZAdresatami.dopiszAdresataDoPliku(adresat))
        cout<<"Nowy adresat zostal dodany!"<<endl;
    else
        cout<<"Blad, nie udalo sie dodac adresata do pliku."<<endl;
    system("pause");
}

void AdresatMenedzer::wypiszWszystkichAdresatow() {
    system("cls");
    for(int i=0; i<adresaci.size(); i++) {
        cout<<"ID:              "<<adresaci[i].pobierzId()<<endl;
        //cout<<adresaci[i].pobierzIdUzytkownika()<<endl;
        cout<<"Imie:            "<<adresaci[i].pobierzImie()<<endl;
        cout<<"Nazwisko:        "<<adresaci[i].pobierzNazwisko()<<endl;
        cout<<"Numer Telefonu:  "<<adresaci[i].pobierzNumerTelefonu()<<endl;
        cout<<"Email:           "<<adresaci[i].pobierzEmail()<<endl;
        cout<<"Adres:           "<<adresaci[i].pobierzAdres()<<endl<<endl;
    }
     system("pause");
}
