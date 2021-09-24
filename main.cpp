#include <iostream>
#include <vector>
#include "KsiazkaAdresowa.h"


using namespace std;

int main() {
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","KsiazkaAdresowa.txt");

    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wylogowanieUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();

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
