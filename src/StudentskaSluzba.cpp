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
	std::cout << "Za promjenu postojecih podataka iz baze, kucate -> promjeniPodatke" << "\n\n";
	std::cout << "Za izlaz iz programa, ukucajte // \n\n";

	std::string temp = "";
	std::cin.clear();
	std::cin >> temp;

	while(temp != "//"){

		if(temp == "prikaziListu"){
			prikaziListu();
		}else if(temp == "promjeniPodatke"){
			promjeniPodatke();
		}else{
			std::cout << "Unijeli ste nepostojecu komandu, pokusajte ponovo: " << '\n' << '\n';
		}

		std::cout << "Za prikaz trenutke liste, kucate -> prikaziListu" << "\n\n";
		std::cout << "Za izlazi iz programa, ukucajte // \n\n";

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
		}else if(aTemp == "predmeti"){
		}else if(aTemp == "studenti"){
		}else if(aTemp == "usmjerenja"){
		}else if(aTemp == "ispiti"){
		}else{
			std::cout << "Niste unijeli ispravan naziv liste\n";
		}

		std::cout << "Liste dostupne za promjenu: " << '\n';
		std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
		std::cout << "za izlaz iz promjeniPodatke, ukucajte // \n\n";

		std::cin.clear();
		std::cin >> aTemp;
	}

	std::cout << "Izlazite iz prikaziListu \n\n";

}
