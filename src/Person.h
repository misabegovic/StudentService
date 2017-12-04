/*
 * Person.h
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person {
private:
	std::string jmbg;
	std::string firstName;
	std::string lastName;
public:
	Person();
	Person(std::string aJmbg, std::string aFirstName, std::string aLastName);
	virtual ~Person();
	std::string getJmbg() { return jmbg; }
	std::string getFirstName() { return firstName; }
	std::string getLastName() { return lastName; }
	void setJmbg(std::string aJmbg){ jmbg = aJmbg; }
	void setFirstName(std::string aFirstName){ firstName = aFirstName; }
	void setLastName(std::string aLastName){ lastName = aLastName; }
};

#endif /* PERSON_H_ */
