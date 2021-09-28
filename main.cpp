#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"


using namespace std;

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","KsiazkaAdresowa.txt");
    char znak;
    int idZalogowanegoUzytkownika=0;
    while(true) {
        if(ksiazkaAdresowa.czyUzytkownikJestZalogowany()) {
            system("cls");
            cout<<"1. Dodaj Adresata"<<endl;
            cout<<"2. Wyszukiwanie po Imieniu"<<endl;
            cout<<"3. Wyszukiwanie po Nazwisku"<<endl;
            cout<<"4. Wyswietl wszystkie kontakty"<<endl;
            cout<<"5. Usun adresata"<<endl;
            cout<<"6. Edytuj adresata"<<endl;
            cout<<"7. Zmiana hasla"<<endl;
            cout<<"8. Wyloguj sie"<<endl;
            cout<<"9. Zakoncz program"<<endl;
            cout<<"Twoj wybor: ";
            znak=MetodyPomocnicze::wczytajZnak();
            switch(znak) {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                exit(0);
                break;
            case '3':
                exit(0);
                break;
            case '4':
                ksiazkaAdresowa.wypiszWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                exit(0);
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            }
        } else {
            system("cls");
            cout<<"Witaj w Twojej ksiazce adresowej!"<<endl;
            cout<<"1. Logowanie"<<endl;
            cout<<"2. Rejestracja"<<endl;
            cout<<"9. Zakoncz program"<<endl;

            cout<<"Twoj wybor: ";
            znak=MetodyPomocnicze::wczytajZnak();
            switch(znak) {
            case '1':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            }
        }
    }

    return 0;
}


























//TESTY

/*#include "AdresatMenedzer.h"

int Adresat_main() {

    AdresatMenedzer adresatMenedzer("KsiazkaAdresowa.txt",1);
    adresatMenedzer.wypiszWszystkichAdresatow();
    adresatMenedzer.dodajAdresata();
    adresatMenedzer.wypiszWszystkichAdresatow();

}


#include "Adresat.h"
#include "PlikZAdresatami.h"

int PlikAdresat_main()
{
    PlikZAdresatami plikZadresatami("Adresaci-test.txt");
    Adresat adresat(1,2,"Artur","Nowak","123 456 789","arturo@wp.pl","Warszawa");

    plikZadresatami.dopiszAdresataDoPliku(adresat);

    cout<<plikZadresatami.pobierzIdOstatniegoAdresata();
}
*/
