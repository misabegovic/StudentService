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
void promjeniNastavnika(Nastavnik &aNastavnik);

#endif /* ZAJEDNICKEMETODE_H_ */
