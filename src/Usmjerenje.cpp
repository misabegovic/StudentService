/*
 * Usmjerenje.cpp
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#include "Usmjerenje.h"

Usmjerenje::Usmjerenje(
		std::string aShortName,
		std::string aFullName,
		std::string aNazivSP) {

	shortName = aShortName;
	fullName = aFullName;
	nazivStudijskogPrograma =aNazivSP;

}

Usmjerenje::Usmjerenje(){}

Usmjerenje::~Usmjerenje() {}

void Usmjerenje::ispisiPodatke(){
	std::cout << "Kratica: " << getShortName() << '\n';
	std::cout << "Puni naziv usmjerenja: " << getFullName() << "\n";
	std::cout << "Pripada studijskom programu: " << getNazivSP() << '\n' << '\n';
}
