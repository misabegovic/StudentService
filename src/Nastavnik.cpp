/*
 * Nastavnik.cpp
 *
 *  Created on: Nov 26, 2017
 *      Author: muhamed
 */

#include "Nastavnik.h"

Nastavnik::Nastavnik(){
	jmbg = "";
	firstName = "";
	lastName = "";
	position = "";
	subject = "";
}

Nastavnik::Nastavnik(std::string empty){
	jmbg = "";
	firstName = "";
	lastName = "";
	position = "";
	subject = "";
}

Nastavnik::Nastavnik(std::string aJmbg, std::string aFirstName,
		std::string aLastName, std::string aPosition, std::string aSubject) {
	jmbg = aJmbg;
	firstName = aFirstName;
	lastName = aLastName;
	position = aPosition;
	subject = aSubject;
}

Nastavnik::~Nastavnik() {
}

void Nastavnik::ispisiPodatke(){

	  std::cout << getJmbg() << std::endl;
	  std::cout << "Ime i prezime: " << getFirstName() << " ";
	  std::cout << getLastName() << '\n';
	  std::cout << "Pozicija: " << getPosition() << '\n';
	  std::cout << "Predmet: " << getSubject() << "\n\n";

}

