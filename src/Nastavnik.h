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
#include "Person.h"

class Nastavnik : public Person{
private:
	std::string position;
	std::string subject;
public:
	Nastavnik();
	Nastavnik(int aJmbg, std::string aFirstName,
			std::string aLastName, std::string aPosition, std::string aSubject);
	~Nastavnik();
	std::string getPosition() {	return position; }
	std::string getSubject() { return subject; }
	void setPosition(std::string aPosition){ position = aPosition; }
	void setSubject(std::string aSubject){ subject = aSubject; }
	void ispisiPodatke();


};


#endif /* NASTAVNIK_H_ */

