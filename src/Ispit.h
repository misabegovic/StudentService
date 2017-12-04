/*
 * Ispit.h
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#ifndef ISPIT_H_
#define ISPIT_H_

#include <string>
#include <iostream>

class Ispit {
private:
	std::string predmetShort;
	std::string profesorJmbg;
	std::string studentIndexNr;
	std::string theDate;
	std::string theGrade;
public:
	Ispit();
	Ispit(std::string aPredmetShort,
		std::string aJmbg,
		std::string aIndexNr,
		std::string aDate,
		std::string aGrade);
	virtual ~Ispit();
	std::string getPredmetShort(){ return predmetShort; }
	std::string getProfesorJmbg(){ return profesorJmbg; }
	std::string getStudentIndexNr(){ return studentIndexNr; }
	std::string getTheDate(){ return theDate; }
	std::string getTheGrade(){ return theGrade; }
	void setPredmetShort(std::string aPredmetShort){ predmetShort = aPredmetShort; }
	void setProfesorJmbg(std::string aJmbg){ profesorJmbg = aJmbg; }
	void setStudentIndexNr(std::string aIndexNr){ studentIndexNr = aIndexNr; }
	void setTheDate(std::string aDate){ theDate = aDate; }
	void setTheGrade(std::string aGrade){ theGrade = aGrade; }
	void ispisiPodatke();
};

#endif /* ISPIT_H_ */
