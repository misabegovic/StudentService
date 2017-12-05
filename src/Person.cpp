/*
 * Person.cpp
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#include "Person.h"

Person::Person() {
	jmbg = "0000000000000";
}

Person::~Person() {
}

Person::Person(
		std::string aJmbg,
		std::string aFirstName,
		std::string aLastName){
	jmbg = aJmbg;
	firstName = aFirstName;
	lastName = aLastName;
}
