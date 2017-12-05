/*
 * ZajednickeMetode.h
 *
 *  Created on: Dec 5, 2017
 *      Author: muhamed
 */

#ifndef ZAJEDNICKEMETODE_H_
#define ZAJEDNICKEMETODE_H_

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "Nastavnik.h"
#include "StudijskiProgram.h"
#include "Predmet.h"
#include "Student.h"
#include "Usmjerenje.h"
#include "Ispit.h"

template<class A>
void ispisiListu(std::vector<A> aList)
{
  typename std::vector<A>::iterator it;

  for(it = aList.begin(); it != aList.end(); ++it){
	  (*it).ispisiPodatke();
  }
}

void prikazListeNastavnika(std::vector<Nastavnik>);
void prikazListeStudijskihPrograma(std::vector<StudijskiProgram>);
void prikazListePredmeta(std::vector<Predmet>);
void prikazListeStudenata(std::vector<Student>);
void prikazListeUsmjerenja(std::vector<Usmjerenje>);
void prikazListeIspita(std::vector<Ispit>);

std::vector<Nastavnik> promjeniListuNastavnika(std::vector<Nastavnik>);
std::vector<StudijskiProgram> promjeniListuStudijskihPrograma(std::vector<StudijskiProgram>);
std::vector<Predmet> promjeniListuPredmeta(std::vector<Predmet>);
std::vector<Student> promjeniListuStudenata(std::vector<Student>);
std::vector<Usmjerenje> promjeniListuUsmjerenja(std::vector<Usmjerenje>);
std::vector<Ispit> promjeniListuIspita(std::vector<Ispit>);

void promjeniNastavnika(Nastavnik &aNastavnik);
void promjeniStudijskiProgram(StudijskiProgram &aSP);
void promjeniPredmet(Predmet &aSP);
void promjeniStudenta(Student &aStudent);
void promjeniUsmjerenje(Usmjerenje &aUsmjerenje);
void promjeniIspit(Ispit &aIspit);

void obrisiIzListeNastavnika(std::vector<Nastavnik> &listaNastavnika);


#endif /* ZAJEDNICKEMETODE_H_ */
