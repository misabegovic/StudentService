/*
 * Student.h
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include "Person.h"

class Student : public Person {
private:
	std::string brIndexa;
	std::string smjer;
public:
	Student();
	Student(std::string, std::string, std::string, std::string, std::string);
	virtual ~Student();
	std::string getBrIndexa(){ return brIndexa; }
	std::string getSmjer(){ return smjer; }
	void setBrIndexa(std::string aBrIndexa){ brIndexa = aBrIndexa; }
	void setSmjer(std::string aSmjer){ smjer = aSmjer; }
	void ispisiPodatke();
};

#endif /* STUDENT_H_ */
