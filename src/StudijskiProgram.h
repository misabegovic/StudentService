/*
 * Nastavnik.h
 *
 *  Created on: Nov 26, 2017
 *      Author: muhamed
 */
#pragma once
#ifndef STUDIJSKI_PROGRAM_H_
#define STUDIJSKI_PROGRAM_H_

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
	std::string getShortTitle() {
		return shortTitle;
	}
	std::string getFullTitle() {
		return fullTitle;
	}
};


#endif /* NASTAVNIK_H_ */

