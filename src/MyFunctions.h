/*
 * MyFunctions.h
 *
 *  Created on: Nov 27, 2017
 *      Author: muhamed
 */

#ifndef MYFUNCTIONS_H_
#define MYFUNCTIONS_H_

#include <iterator>
#include <iostream>
#include <fstream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include "Nastavnik.h"
#include "StudijskiProgram.h"

//sa vektorom
std::vector<Nastavnik> readNastavnikFile();
std::vector<StudijskiProgram> readSPFile();
void ispisiListuNastavnika(std::vector<Nastavnik>);
void ispisiListuStudijskihPrograma(std::vector<StudijskiProgram>);

void updateNastavnikFile(std::map<std::string, Nastavnik>);


#endif /* MYFUNCTIONS_H_ */
