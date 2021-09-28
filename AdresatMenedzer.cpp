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

int AdresatMenedzer::podajIdWybranegoAdresata() {
    int idWybranegoAdresata=0;
    cout<<"Podaj ID Adresata: ";
    idWybranegoAdresata=MetodyPomocnicze::konwersjaStringNaInt(MetodyPomocnicze::wczytajLinie());
    return idWybranegoAdresata;
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

int AdresatMenedzer::usunAdresata() {
    vector<Adresat>adresaci;
    adresaci=plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    int idUsuwanegoAdresata = 0;
    int numerLiniiUsuwanegoAdresata = 0;

    system("cls");
    cout << ">>> USUWANIE WYBRANEGO ADRESATA <<<" << endl << endl;
    idUsuwanegoAdresata = podajIdWybranegoAdresata();

    char znak;
    bool czyIstniejeAdresat = false;

    for (vector <Adresat>::iterator itr = adresaci.begin(); itr != adresaci.end(); itr++) {
        if (itr -> pobierzId() == idUsuwanegoAdresata) {
            czyIstniejeAdresat = true;
            cout << endl << "Potwierdz naciskajac klawisz 't': ";
            znak = MetodyPomocnicze::wczytajZnak();
            if (znak == 't') {
                plikZAdresatami.usunWybranaLinieWPliku(idUsuwanegoAdresata);
                adresaci.erase(itr);
                cout << endl << endl << "Szukany adresat zostal USUNIETY" << endl << endl;
                system("pause");
                return idUsuwanegoAdresata;
            } else {
                cout << endl << endl << "Wybrany adresat NIE zostal usuniety" << endl << endl;
                system("pause");
                return 0;
            }
        }
    }
    if (czyIstniejeAdresat == false) {
        cout << endl << "Nie ma takiego adresata w ksiazce adresowej" << endl << endl;
        system("pause");
    }

}

void AdresatMenedzer::wypiszWszystkichAdresatow() {
    system("cls");
    vector<Adresat>adresaci;
    adresaci=plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
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
