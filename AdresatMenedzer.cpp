#include "AdresatMenedzer.h"

using namespace std;

void AdresatMenedzer::wczytajAdresatowZPliku() {
    adresaci = plikZAdresatami.wczytajAdresatowZPliku();
}
int AdresatMenedzer::pobierzIdOstatniegoAdresata() {
    return idOstatniegoAdresata=adresaci.size();
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata() {
    Adresat adresat;

    adresat.ustawId(pobierzIdNowegoAdresata());
    adresat.ustawIdUzytkownika(1);

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

int AdresatMenedzer::dodajAdresata() {
    Adresat adresat;

    system("cls");
    cout<<"ID Uzytkownika: "<<1<<endl;
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return idOstatniegoAdresata++;
}

void AdresatMenedzer::wypiszWszystkichAdresatow() {
    for(int i=0; i<adresaci.size(); i++) {
        cout<<adresaci[i].pobierzId()<<endl;
        cout<<adresaci[i].pobierzIdUzytkownika()<<endl;
        cout<<adresaci[i].pobierzImie()<<endl;
        cout<<adresaci[i].pobierzNazwisko()<<endl;
        cout<<adresaci[i].pobierzNumerTelefonu()<<endl;
        cout<<adresaci[i].pobierzEmail()<<endl;
        cout<<adresaci[i].pobierzAdres()<<endl<<endl;
    }
}
