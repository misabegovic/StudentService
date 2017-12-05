/*
 * MyFunctions.h
 *
 *  Created on: Nov 27, 2017
 *      Author: muhamed
 */

#ifndef CITANJEUPISIVANJEFILEOVA_H_
#define CITANJEUPISIVANJEFILEOVA_H_

#include <iterator>
#include <iostream>
#include <sstream>
#include <fstream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include "Nastavnik.h"
#include "StudijskiProgram.h"
#include "Predmet.h"
#include "Student.h"
#include "Usmjerenje.h"
#include "Ispit.h"

std::vector<Nastavnik> readNastavnikFile();
std::vector<StudijskiProgram> readSPFile();
std::vector<Predmet> readPredmetFile();
std::vector<Student> readStudentFile();
std::vector<Usmjerenje> readUsmjerenjeFile();
std::vector<Ispit> readIspitFile();

void updateNastavnikFile(std::vector<Nastavnik>);
void updateSPFile(std::vector<StudijskiProgram>);
void updatePredmetFile(std::vector<Predmet>);
void updateStudentFile(std::vector<Student>);
void updateUsmjerenjeFile(std::vector<Usmjerenje>);
void updateIspitFile(std::vector<Ispit>);

#endif /* CITANJEUPISIVANJEFILEOVA_H_ */
