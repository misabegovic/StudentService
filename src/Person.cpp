/*
 * Person.cpp
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#include "Person.h"

Person::Person() {

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
