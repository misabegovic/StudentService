/*
 * Nastavnik.h
 *
 *  Created on: Nov 26, 2017
 *      Author: muhamed
 */
#pragma once
#ifndef STUDIJSKI_PROGRAM_H_
#define STUDIJSKI_PROGRAM_H_

#include <iostream>
#include <string>
#include <map>

class StudijskiProgram {
private:
	std::string shortTitle;
	std::string fullTitle;
public:
	StudijskiProgram();
	StudijskiProgram(std::string shortTitle, std::string fullTitle);
	~StudijskiProgram();
	std::string getShortTitle() { return shortTitle; }
	std::string getFullTitle() { return fullTitle; }
	void setShortTitle(std::string aShortTitle){ shortTitle = aShortTitle;}
	void setFullTitle(std::string aFullTitle){ fullTitle = aFullTitle;}
	void ispisiPodatke();
};


#endif /* NASTAVNIK_H_ */

