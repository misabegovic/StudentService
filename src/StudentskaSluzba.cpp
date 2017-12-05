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

int main ()
{
	nastavnici = readNastavnikFile();
	studijskiProgrami = readSPFile();
	predmeti = readPredmetFile();
	studenti = readStudentFile();
	usmjerenja = readUsmjerenjeFile();
	ispiti = readIspitFile();

	std::string temp = "";

	while(temp != "//"){

		std::cout << "Dobro dosli, imate sljedece opcije: " << '\n' << '\n';
		std::cout << "Za prikaz trenutke liste, kucate -> prikaziListu" << "\n\n";
		std::cout << "Za izlazi iz programa, ukucajte // \n\n";

		std::cin >> temp;
		std::string valid;
		std::string aBreak;

		while(valid != "ok"){

			if(temp == "//"){
				break;
			}else if(temp == "prikaziListu"){
				std::cin.clear();
				valid = "ok";
				prikaziListu();
			}else{
				std::cout << "Unijeli ste nepostojecu komandu, pokusajte ponovo: " << '\n' << '\n';
				std::cin.clear();
				std::cin >> temp;
			}
		}
	}

    updateNastavnikFile(nastavnici);

  return 0;
}

void prikaziListu(){

	std::cout << "Liste dostupne za citanje: " << '\n';
	std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";
	std::cout << "za prekid, ukucajte // \n\n";

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
				std::cin.clear();
				std::cin >> aTemp;
			}
	}
}
