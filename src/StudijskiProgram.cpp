/*
 * StudijskiProgram.cpp
 *
 *  Created on: Dec 2, 2017
 *      Author: muhamed
 */

#include "StudijskiProgram.h"

StudijskiProgram::StudijskiProgram() {}

StudijskiProgram::StudijskiProgram(std::string aShortTitle, std::string aFullTitle) {
	shortTitle = aShortTitle;
	fullTitle = aFullTitle;
}

StudijskiProgram::~StudijskiProgram() {}

void StudijskiProgram::ispisiPodatke(){

	std::cout << "Kratica studijskog programa: " << getShortTitle() << '\n';
	std::cout << "Puni naziv studijskog programa: " << getFullTitle() << "\n\n";

}
