//============================================================================
// Author      : Muhamed Isabegovic
//============================================================================

#include <iterator>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

#include "CitanjeUpisivanjeFileova.h"
#include "ZajednickeMetode.h"

static std::vector<Nastavnik> nastavnici;
static std::vector<StudijskiProgram> studijskiProgrami;
static std::vector<Predmet> predmeti;
static std::vector<Student> studenti;
static std::vector<Usmjerenje> usmjerenja;
static std::vector<Ispit> ispiti;

void prikaziListu();
void promjeniPodatke();
void obrisiPodatke();
void dodajPodatke();

int main ()
{
	nastavnici = readNastavnikFile();
	studijskiProgrami = readSPFile();
	predmeti = readPredmetFile();
	studenti = readStudentFile();
	usmjerenja = readUsmjerenjeFile();
	ispiti = readIspitFile();

	std::cout << "Dobro dosli, imate sljedece opcije: " << '\n' << '\n';
	std::cout << "Za prikaz trenutne liste iz baze, kucate -> prikaziListu" << "\n";
	std::cout << "Za dodavanje novih podataka u baze, kucate -> dodajPodatke" << "\n";
	std::cout << "Za promjenu postojecih podataka iz baze, kucate -> promjeniPodatke" << "\n";
	std::cout << "Za brisanje podataka iz baze, kucate -> obrisiPodatke" << "\n\n";
	std::cout << "Za izlaz iz programa, ukucajte // \n\n";

	std::string temp = "";
	std::cin.clear();
	std::cin >> temp;

	while(temp != "//"){

		if(temp == "prikaziListu"){
			prikaziListu();
		}else if(temp == "promjeniPodatke"){
			promjeniPodatke();
		}else if(temp == "obrisiPodatke"){
			obrisiPodatke();
		}else if(temp == "dodajPodatke"){
			dodajPodatke();
		}else{
			std::cout << "Unijeli ste nepostojecu komandu, pokusajte ponovo: " << '\n' << '\n';
		}

		std::cout << "Za prikaz trenutne liste iz baze, kucate -> prikaziListu" << "\n";
		std::cout << "Za dodavanje novih podataka u baze, kucate -> dodajPodatke" << "\n";
		std::cout << "Za promjenu postojecih podataka iz baze, kucate -> promjeniPodatke" << "\n";
		std::cout << "Za brisanje podataka iz baze, kucate -> obrisiPodatke" << "\n\n";
		std::cout << "Za izlaz iz programa, ukucajte // \n\n";

		std::cin.clear();
		std::cin >> temp;
	}

    updateNastavnikFile(nastavnici);
    updateSPFile(studijskiProgrami);
    updatePredmetFile(predmeti);
    updateStudentFile(studenti);
    updateUsmjerenjeFile(usmjerenja);
    updateIspitFile(ispiti);

  return 0;
}

void prikaziListu(){

	std::cout << "Ulazite u prikaziListu \n\n";

	std::cout << "Liste dostupne za citanje: " << '\n';
	std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
	std::cout << "za izlaz iz prikaziListu, ukucajte // \n\n";

	std::string aTemp;
	std::cin >> aTemp;

	while(aTemp != "//"){
		if( aTemp == "nastavnici"){
			prikazListeNastavnika(nastavnici);
		}else if(aTemp == "studijskiProgrami"){
			prikazListeStudijskihPrograma(studijskiProgrami);
		}else if(aTemp == "predmeti"){
			prikazListePredmeta(predmeti);
		}else if(aTemp == "studenti"){
			prikazListeStudenata(studenti);
		}else if(aTemp == "usmjerenja"){
			prikazListeUsmjerenja(usmjerenja);
		}else if(aTemp == "ispiti"){
			prikazListeIspita(ispiti);
		}else{
			std::cout << "Niste unijeli ispravan naziv liste\n";
		}

		std::cout << "Liste dostupne za citanje: " << '\n';
		std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
		std::cout << "za izlaz iz prikaziListu, ukucajte // \n\n";

		std::cin.clear();
		std::cin >> aTemp;
	}

	std::cout << "Izlazite iz prikaziListu \n\n";
}

void promjeniPodatke(){

	std::cout << "Ulazite u promjeniPodatke \n\n";

	std::cout << "Liste dostupne za promjenu: " << '\n';
	std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
	std::cout << "za izlaz iz promjeniPodatke, ukucajte // \n\n";

	std::string aTemp;
	std::cin >> aTemp;

	while(aTemp != "//"){
		if( aTemp == "nastavnici"){
			nastavnici = promjeniListuNastavnika(nastavnici);
		}else if(aTemp == "studijskiProgrami"){
			studijskiProgrami = promjeniListuStudijskihPrograma(studijskiProgrami);
		}else if(aTemp == "predmeti"){
			predmeti = promjeniListuPredmeta(predmeti);
		}else if(aTemp == "studenti"){
			studenti = promjeniListuStudenata(studenti);
		}else if(aTemp == "usmjerenja"){
			usmjerenja = promjeniListuUsmjerenja(usmjerenja);
		}else if(aTemp == "ispiti"){
			ispiti = promjeniListuIspita(ispiti);
		}else{
			std::cout << "Niste unijeli ispravan naziv liste\n";
		}

		std::cout << "Liste dostupne za promjenu: " << '\n';
		std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
		std::cout << "za izlaz iz promjeniPodatke, ukucajte // \n\n";

		std::cin.clear();
		std::cin >> aTemp;
	}

	std::cout << "Izlazite iz promjeniPodatke \n\n";

}

void obrisiPodatke(){
	std::cout << "Ulazite u obrisiPodatke \n\n";

	std::cout << "Liste dostupne za promjenu: " << '\n';
	std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
	std::cout << "za izlaz iz obrisiPodatke, ukucajte // \n\n";

	std::string aTemp;
	std::cin >> aTemp;

	while(aTemp != "//"){
		if( aTemp == "nastavnici"){
			obrisiIzListeNastavnika(nastavnici);
		}else if(aTemp == "studijskiProgrami"){
			obrisiIzListeStudijskihPrograma(studijskiProgrami);
		}else if(aTemp == "predmeti"){
			obrisiIzListePredmeta(predmeti);
		}else if(aTemp == "studenti"){
			obrisiIzListeStudenata(studenti);
		}else if(aTemp == "usmjerenja"){
			obrisiIzListeUsmjerenja(usmjerenja);
		}else if(aTemp == "ispiti"){
			obrisiIzListeIspita(ispiti);
		}else{
			std::cout << "Niste unijeli ispravan naziv liste\n";
		}

		std::cout << "Liste dostupne za promjenu: " << '\n';
		std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
		std::cout << "za izlaz iz obrisiPodatke, ukucajte // \n\n";

		std::cin.clear();
		std::cin >> aTemp;
	}

	std::cout << "Izlazite iz obrisiPodatke \n\n";
}

void dodajPodatke(){

	std::cout << "Ulazite u dodajPodatke \n\n";

	std::cout << "U koju listu zelite dodati? " << '\n';
	std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
	std::cout << "za izlaz iz dodajPodatke, ukucajte // \n\n";

	std::string aTemp;
	std::cin >> aTemp;

	while(aTemp != "//"){
		if( aTemp == "nastavnici"){
			dodajUListuNastavnika(nastavnici);
		}else if(aTemp == "studijskiProgrami"){
			dodajUListuStudijskihPrograma(studijskiProgrami);
		}else if(aTemp == "predmeti"){
			dodajUListuPredmeta(predmeti, usmjerenja, studijskiProgrami);
		}else if(aTemp == "studenti"){
			dodajUListuStudenata(studenti);
		}else if(aTemp == "usmjerenja"){
			dodajUListuUsmjerenja(usmjerenja);
		}else if(aTemp == "ispiti"){
			dodajUListuIspita(
					ispiti,
					nastavnici,
					studenti,
					predmeti);
		}else{
			std::cout << "Niste unijeli ispravan naziv liste\n";
		}

		std::cout << "U koju listu zelite dodati? " << '\n';
		std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
		std::cout << "za izlaz iz dodajPodatke, ukucajte // \n\n";

		std::cin.clear();
		std::cin >> aTemp;
	}

	std::cout << "Izlazite iz dodajPodatke \n\n";

}
