/*
 * ZajednickeMetode.cpp
 *
 *  Created on: Dec 5, 2017
 *      Author: muhamed
 */

#include "ZajednickeMetode.h"

void prikazListeNastavnika(std::vector<Nastavnik> listaNastavnika){
	std::cout << "\nNastavnici: \n\n";
	ispisiListu(listaNastavnika);
	std::cout << std::endl;
}

std::vector<Nastavnik> promjeniListuNastavnika(std::vector<Nastavnik> listaNastavnika){

	std::cout << "Ulazite u promjeniNastavnika \n";
	std::cout << "Nadjite nastavnika kojeg zelite promjeniti po JMBG: \n\n";

	std::string jmbgNastavnika;
	std::cin >> jmbgNastavnika;
	bool nastavnikFound = false;
	std::vector<Nastavnik>::iterator iter;

	for(iter = listaNastavnika.begin(); iter != listaNastavnika.end(); ++iter){
		if((*iter).getJmbg() == jmbgNastavnika){
			promjeniNastavnika((*iter));
			nastavnikFound = true;
		}
	}

	if(!nastavnikFound){
		std::cout << "Nastavnik sa takvim JMBG-om ne postoji u bazi \n";
	}

	return listaNastavnika;

}

void promjeniNastavnika(Nastavnik &aNastavnik){
	std::cout << "Nastavnik prije editovanja: \n\n";
	aNastavnik.ispisiPodatke();

	std::cout << "Sta zelite promjeniti? \n\n";
	std::cout << "Upisite // kada zavrsite sa promjenama \n";
	std::cout << "Dostupno za promjenu: ime , prezime , pozicija , predmet \n\n";

	std::string aTemp;
	std::cin >> aTemp;

	while(aTemp != "//"){

		if( aTemp == "ime"){
			std::cout << "Upisite novo ime koje zelite: \n\n";
			std::string aIme;
			std::cin >> aIme;
			aNastavnik.setFirstName(aIme);
		}else if(aTemp == "prezime"){
			std::cout << "Upisite novo prezime koje zelite: \n\n";
			std::string aPrezime;
			std::cin >> aPrezime;
			aNastavnik.setLastName(aPrezime);
		}else if(aTemp == "pozicija"){
			std::cout << "Upisite novu poziciju koju zelite: \n\n";
			std::string aPoz;
			std::cin >> aPoz;
			aNastavnik.setPosition(aPoz);
		}else if(aTemp == "predmet"){
			std::cout << "Upisite novi predmet koji zelite: \n\n";
			std::string aPred;
			std::cin >> aPred;
			aNastavnik.setSubject(aPred);
		}else{
			std::cout << "Niste unijeli ispravan naziv varijable \n";
		}

		std::cout << "Upisite // kada zavrsite sa promjenama \n";
		std::cout << "Dostupno za promjenu: ime , prezime , pozicija , predmet \n\n";

		std::cin.clear();
		std::cin >> aTemp;

	}

	std::cout << "Nastavnik poslije editovanja: \n\n";
	aNastavnik.ispisiPodatke();
}

void prikazListeStudijskihPrograma(std::vector<StudijskiProgram> studijskiProgrami){
	std::cout << "\nStudijski Programi: \n\n";
	ispisiListu(studijskiProgrami);
	std::cout << std::endl;
}

std::vector<StudijskiProgram> promjeniListuStudijskihPrograma(std::vector<StudijskiProgram> studijskiProgrami){

	std::cout << "Ulazite u promjeniListuStudijskihPrograma \n";
	std::cout << "Nadjite studijski program kojega zelite promjeniti po kratici (2 slova): \n\n";

	std::string shortTitle;
	std::cin >> shortTitle;
	bool spFound = false;
	std::vector<StudijskiProgram>::iterator iter;

	for(iter = studijskiProgrami.begin(); iter != studijskiProgrami.end(); ++iter){
		if((*iter).getShortTitle() == shortTitle){
			promjeniStudijskiProgram((*iter));
			spFound = true;
		}
	}

	if(!spFound){
		std::cout << "Studijski Program sa takvom kraticom ne postoji u bazi \n";
	}

	return studijskiProgrami;
}

void promjeniStudijskiProgram(StudijskiProgram &aSP){
	std::cout << "Studijski program prije editovanja: \n\n";
	aSP.ispisiPodatke();

	std::cout << "Sta zelite promjeniti? \n\n";
	std::cout << "Upisite // kada zavrsite sa promjenama \n";
	std::cout << "Dostupno za promjenu: kratica , puniNaziv \n\n";

	std::string aTemp;
	std::cin >> aTemp;

	while(aTemp != "//"){

		if( aTemp == "kratica"){
			std::cout << "Upisite novu kraticu koje zelite (2 slova): \n\n";
			std::string aKratica;
			std::cin >> aKratica;
			while(aKratica.length() <= 0 || aKratica.length() > 2){
				std::cout << "Ponovo upisite novu kraticu koje zelite\n";
				std::cout << "Ne smije biti veca od 2 slova: \n\n";
				std::cin.clear();
				std::cin >> aKratica;
			}
			aSP.setShortTitle(aKratica);
		}else if(aTemp == "puniNaziv"){
			std::cout << "Upisite novi naziv koje zelite: \n\n";
			std::string aPuniNaziv;
			std::cin >> aPuniNaziv;
			aSP.setFullTitle(aPuniNaziv);
		}else{
			std::cout << "Niste unijeli ispravan naziv varijable \n";
		}

		std::cout << "Upisite // kada zavrsite sa promjenama \n";
		std::cout << "Dostupno za promjenu: kratica , puniNaziv \n\n";

		std::cin.clear();
		std::cin >> aTemp;

	}

	std::cout << "Studijski program poslije editovanja: \n\n";
	aSP.ispisiPodatke();
}

void prikazListePredmeta(std::vector<Predmet> predmeti){
	std::cout << "\nPredmeti: \n\n";
	ispisiListu(predmeti);
	std::cout << std::endl;
}

void prikazListeStudenata(std::vector<Student> studenti){
	std::cout << "\nStudenti: \n\n";
	ispisiListu(studenti);
	std::cout << std::endl;
}

void prikazListeUsmjerenja(std::vector<Usmjerenje> usmjerenja){
	std::cout << "\nUsmjerenja: \n\n";
	ispisiListu(usmjerenja);
	std::cout << std::endl;
}

void prikazListeIspita(std::vector<Ispit> ispiti){
	std::cout << "\nIspiti: \n\n";
	ispisiListu(ispiti);
	std::cout << std::endl;
}
