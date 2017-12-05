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
	int jmbg;
	std::string firstName;
	std::string lastName;
public:
	Person();
	Person(int aJmbg, std::string aFirstName, std::string aLastName);
	virtual ~Person();
	int getJmbg() { return jmbg; }
	std::string getFirstName() { return firstName; }
	std::string getLastName() { return lastName; }
	void setJmbg(int aJmbg){ jmbg = aJmbg; }
	void setFirstName(std::string aFirstName){ firstName = aFirstName; }
	void setLastName(std::string aLastName){ lastName = aLastName; }
};

#endif /* PERSON_H_ */
