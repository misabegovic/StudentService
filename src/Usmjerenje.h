/*
 * Usmjerenje.h
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#ifndef USMJERENJE_H_
#define USMJERENJE_H_

#include <string>
#include <iostream>

class Usmjerenje {
private:
	std::string shortName;
	std::string fullName;
	std::string nazivStudijskogPrograma;
public:
	Usmjerenje();
	Usmjerenje(
			std::string aShortName,
			std::string aFullName,
			std::string aNazivSP);
	virtual ~Usmjerenje();
	void setShortName(std::string aSName){ shortName = aSName; }
	void setFullName(std::string aFName){ fullName = aFName; }
	void setNazivSP(std::string aSPNaziv){ nazivStudijskogPrograma = aSPNaziv; }
	std::string getShortName(){ return shortName; }
	std::string getFullName(){ return fullName; }
	std::string getNazivSP(){ return nazivStudijskogPrograma; }
	void ispisiPodatke();
};

#endif /* USMJERENJE_H_ */
