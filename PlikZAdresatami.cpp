#include "PlikZAdresatami.h"

using namespace std;

vector<Adresat> PlikZAdresatami::wczytajAdresatowZPliku() {
    Adresat adresat;
    vector<Adresat>adresaci;
    fstream plikTekstowy;
    string daneAdresataOddzielonePionowymiKreskami = "";
    plikTekstowy.open(NAZWA_PLIKU_Z_ADRESATAMI.c_str(), ios::in);

    if (plikTekstowy.good() == true) {
        while (getline(plikTekstowy, daneAdresataOddzielonePionowymiKreskami)) {
            adresat = pobierzDaneAdresata(daneAdresataOddzielonePionowymiKreskami);
            adresaci.push_back(adresat);
        }
    }
    plikTekstowy.close();
    return adresaci;
}

vector<Adresat> PlikZAdresatami::wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika) {
    vector<Adresat> adresaci;
    Adresat adresat;
    string daneJednegoAdresataOdzielonePionowymiKreskami="";
    string daneOstatniegoAdresataZPliku="";
    fstream plikTekstowy;
    plikTekstowy.open(NAZWA_PLIKU_Z_ADRESATAMI.c_str(),ios::in);
    if(plikTekstowy.good()==true) {
        while(getline(plikTekstowy,daneJednegoAdresataOdzielonePionowymiKreskami )) {
            if(idZalogowanegoUzytkownika==pobierzIdUzytkownikaZDanychOdzielonychPionowymiKreskami(daneJednegoAdresataOdzielonePionowymiKreskami)) {
                adresat=pobierzDaneAdresata(daneJednegoAdresataOdzielonePionowymiKreskami);
                adresaci.push_back(adresat);
            }
        }
        daneOstatniegoAdresataZPliku=daneJednegoAdresataOdzielonePionowymiKreskami;
        plikTekstowy.close();
    }
    if(daneOstatniegoAdresataZPliku!="") {
        idOstatniegoAdresata=pobierzIdAdresataZDanychOdzielonychPionowymiKreskami(daneOstatniegoAdresataZPliku);
    }
    return adresaci;
}

int PlikZAdresatami::pobierzIdUzytkownikaZDanychOdzielonychPionowymiKreskami(string daneJednegoAdresataOdzielonePionowymiKreskami) {
    int pozycjaRozpoczeciaIdUzytkownika=daneJednegoAdresataOdzielonePionowymiKreskami.find_first_of('|')+1;
    int idUzytkownika = MetodyPomocnicze::konwersjaStringNaInt(pobierzLiczbe(daneJednegoAdresataOdzielonePionowymiKreskami,pozycjaRozpoczeciaIdUzytkownika));
    return idUzytkownika;
}

int PlikZAdresatami::pobierzIdAdresataZDanychOdzielonychPionowymiKreskami(string daneJednegoAdresataOdzielonePionowymiKreskami) {
    int pozycjaRozpoczeciaIdAdresata=0;
    int idAdresata = MetodyPomocnicze::konwersjaStringNaInt(pobierzLiczbe(daneJednegoAdresataOdzielonePionowymiKreskami,pozycjaRozpoczeciaIdAdresata));
    return idAdresata;
}

string PlikZAdresatami::pobierzLiczbe(string tekst,int pozycjaZnaku ) {
    string liczba="";
    while(isdigit(tekst[pozycjaZnaku])==true) {
        liczba+=tekst[pozycjaZnaku];
        pozycjaZnaku++;
    }
    return liczba;
}


string PlikZAdresatami::zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat) {
    string liniaZDanymiAdresata = "";

    liniaZDanymiAdresata += MetodyPomocnicze::konwerjsaIntNaString(adresat.pobierzId()) + '|';
    liniaZDanymiAdresata += MetodyPomocnicze::konwerjsaIntNaString(adresat.pobierzIdUzytkownika()) + '|';
    liniaZDanymiAdresata += adresat.pobierzImie() + '|';
    liniaZDanymiAdresata += adresat.pobierzNazwisko() + '|';
    liniaZDanymiAdresata += adresat.pobierzNumerTelefonu() + '|';
    liniaZDanymiAdresata += adresat.pobierzEmail() + '|';
    liniaZDanymiAdresata += adresat.pobierzAdres() + '|';

    return liniaZDanymiAdresata;
}


bool PlikZAdresatami::dopiszAdresataDoPliku(Adresat adresat) {
    string liniaZDanymiAdresata = "";
    fstream plikTekstowy;
    plikTekstowy.open(NAZWA_PLIKU_Z_ADRESATAMI.c_str(), ios::out | ios::app);

    if (plikTekstowy.good() == true) {
        liniaZDanymiAdresata = zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(adresat);
        plikTekstowy.seekg(0, ios::end);
        if (plikTekstowy.tellg() == 0) {
            plikTekstowy << liniaZDanymiAdresata;
        } else {
            plikTekstowy <<endl<< liniaZDanymiAdresata ;
        }
        idOstatniegoAdresata++;
        plikTekstowy.close();
        system("pause");
        return true;
    }
    return false;

}

Adresat PlikZAdresatami::pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami) {
    Adresat adresat;
    string pojedynczaDanaAdresata = "";
    int numerPojedynczejDanejAdresata = 1;

    for (int pozycjaZnaku = 0; pozycjaZnaku < daneAdresataOddzielonePionowymiKreskami.length(); pozycjaZnaku++) {
        if (daneAdresataOddzielonePionowymiKreskami[pozycjaZnaku] != '|') {
            pojedynczaDanaAdresata += daneAdresataOddzielonePionowymiKreskami[pozycjaZnaku];
        } else {
            switch(numerPojedynczejDanejAdresata) {
            case 1:
                adresat.ustawId(atoi(pojedynczaDanaAdresata.c_str()));
                break;
            case 2:
                adresat.ustawIdUzytkownika(atoi(pojedynczaDanaAdresata.c_str()));
                break;
            case 3:
                adresat.ustawImie(pojedynczaDanaAdresata);
                break;
            case 4:
                adresat.ustawNazwisko(pojedynczaDanaAdresata);
                break;
            case 5:
                adresat.ustawNumerTelefonu(pojedynczaDanaAdresata);
                break;
            case 6:
                adresat.ustawEmail(pojedynczaDanaAdresata);
                break;
            case 7:
                adresat.ustawAdres(pojedynczaDanaAdresata);
                break;
            }
            pojedynczaDanaAdresata = "";
            numerPojedynczejDanejAdresata++;
        }
    }
    return adresat;
}

int PlikZAdresatami::pobierzIdOstatniegoAdresata() {
    return idOstatniegoAdresata;
}

