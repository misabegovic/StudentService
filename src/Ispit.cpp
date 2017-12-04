/*
 * Ispit.cpp
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#include "Ispit.h"


Ispit::Ispit() {}

Ispit::~Ispit() {}

Ispit::Ispit(
		std::string aPredmetShort,
		std::string aJmbg,
		std::string aIndexNr,
		std::string aDate,
		std::string aGrade){

	predmetShort = aPredmetShort;
	profesorJmbg = aJmbg;
	studentIndexNr = aIndexNr;
	theDate = aDate;
	theGrade = aGrade;
}

void Ispit::ispisiPodatke(){
	std::cout << "Skracenica predmeta: " << getPredmetShort() << std::endl;
	std::cout << "Jmbg profesora: " << getProfesorJmbg() << '\n';
	std::cout << "Index Studenta: " << getStudentIndexNr() << '\n';
	std::cout << "Datum ispita: " << getTheDate() << '\n';
	std::cout << "Ocjena: " << getTheGrade() << "\n\n";
}
