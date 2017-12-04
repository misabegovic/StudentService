/*
 * Nastavnik.h
 *
 *  Created on: Nov 26, 2017
 *      Author: muhamed
 */
#pragma once
#ifndef NASTAVNIK_H_
#define NASTAVNIK_H_

#include <iostream>
#include <string>
#include <map>

class Nastavnik {
private:
	std::string jmbg;
	std::string firstName;
	std::string lastName;
	std::string position;
	std::string subject;
public:
	Nastavnik();
	Nastavnik(std::string);
	Nastavnik(std::string aJmbg, std::string aFirstName,
			std::string aLastName, std::string aPosition, std::string aSubject);
	~Nastavnik();
	std::string getJmbg() { return jmbg; }
	std::string getFirstName() { return firstName; }
	std::string getLastName() { return lastName; }
	std::string getPosition() {	return position; }
	std::string getSubject() { return subject; }
	void setJmbg(std::string aJmbg){ jmbg = aJmbg; }
	void setFirstName(std::string aFirstName){ firstName = aFirstName; }
	void setLastName(std::string aLastName){ lastName = aLastName; }
	void setPosition(std::string aPosition){ position = aPosition; }
	void setSubject(std::string aSubject){ subject = aSubject; }
	void ispisiPodatke();


};


#endif /* NASTAVNIK_H_ */

