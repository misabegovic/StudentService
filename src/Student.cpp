/*
 * Student.cpp
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#include "Student.h"


Student::Student(
		int aJmbg,
		std::string aFirstName,
		std::string aLastName,
		std::string aIndexNr,
		std::string aSmjer
		) {
	setJmbg(aJmbg);
	setFirstName(aFirstName);
	setLastName(aLastName);
	brIndexa = aIndexNr;
	smjer = aSmjer;
}

Student::Student(){
	setJmbg(0000000000000);
	setFirstName("");
	setLastName("");
	brIndexa = "";
	smjer = "";
}

Student::~Student() {
}

void Student::ispisiPodatke(){
	std::cout << getJmbg() << std::endl;
	std::cout << "Ime i prezime: " << getFirstName() << " ";
	std::cout << getLastName() << '\n';
	std::cout << "Br. Indexa: " << getBrIndexa() << '\n';
	std::cout << "Smjer: " << getSmjer() << "\n\n";
}
