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

	while(temp != "()"){

		std::cout << "Dobro dosli, imate sljedece opcije: " << '\n' << '\n';
		std::cout << "Za prikaz trenutke liste, kucate -> prikaziListu" << "\n\n";

		std::cin >> temp;

		if(temp == "prikaziListu"){
			prikaziListu();
		}

	}

    updateNastavnikFile(nastavnici);

  return 0;
}

void prikaziListu(){

	std::cout << "Liste dostupne za citanje: " << '\n';
	std::cout << "nastavnici , studijskiProgrami, predmeti, studenti, usmjerenja, ispiti" << "\n\n";

	std::string aTemp;
	std::cin >> aTemp;
	std::string aBreak = "";

	while(aBreak != "()"){
			if( aTemp == "nastavnici"){
				prikazListeNastavnika(nastavnici);
				aBreak = "()";
			}else if(aTemp == "studijskiProgrami"){
				prikazListeStudijskihPrograma(studijskiProgrami);
				aBreak = "()";
			}else if(aTemp == "predmeti"){
				prikazListePredmeta(predmeti);
				aBreak = "()";
			}else if(aTemp == "studenti"){
				prikazListeStudenata(studenti);
				aBreak = "()";
			}else if(aTemp == "usmjerenja"){
				prikazListeUsmjerenja(usmjerenja);
				aBreak = "()";
			}else if(aTemp == "ispiti"){
				prikazListeIspita(ispiti);
				aBreak = "()";
			}else{
				std::cout << "Niste unijeli ispravan naziv liste\n";
				std::cin.clear();
				std::cin >> aTemp;
			}
	}
}
