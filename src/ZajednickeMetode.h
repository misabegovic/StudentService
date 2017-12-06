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

template<class A>
int nadjiElement(std::vector<A> aList, std::string aJmbgElement)
{
  typename std::vector<A>::iterator it;
  int aReturn = 0;

  for(it = aList.begin(); it != aList.end(); ++it){
	  if( (*it).getJmbg() == aJmbgElement ){
		  aReturn = 1;
	  }
  }

  return aReturn;
}

int nadjiStudentaPoIndexu(std::vector<Student> aListaStudenata, std::string aIndexNr);
int nadjiPredmetPoKratici(std::vector<Predmet> aListaPredmeta, std::string aKratica);
int nadjiSPPoKratici(std::vector<StudijskiProgram> aListaPredmeta, std::string aKratica);
int nadjiUsmjerenjePoKratici(std::vector<Usmjerenje> aListaUsmjerenja, std::string aKratica);
int nadjiIspitPoDatumuStudentuPredmetu(
		std::vector<Ispit> aListaIspita,
		std::string datum,
		std::string indexNr,
		std::string kratica);

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
void obrisiIzListeStudijskihPrograma(std::vector<StudijskiProgram> &listaSP);
void obrisiIzListePredmeta(std::vector<Predmet> &listaPredmeta);
void obrisiIzListeStudenata(std::vector<Student> &listaStudenata);
void obrisiIzListeUsmjerenja(std::vector<Usmjerenje> &listaUsmjerenja);
void obrisiIzListeIspita(std::vector<Ispit> &listaIspita);

void dodajUListuNastavnika(std::vector<Nastavnik> &listaNastavnika);
void dodajUListuStudijskihPrograma(std::vector<StudijskiProgram> &listaSP);
void dodajUListuPredmeta(std::vector<Predmet> &listaPredmeta);
void dodajUListuStudenata(std::vector<Student> &listaStudenata);
void dodajUListuUsmjerenja(std::vector<Usmjerenje> &listaUsmjerenja);
void dodajUListuIspita(
		std::vector<Ispit> &listaIspita,
		std::vector<Nastavnik> &listaNastavnika,
		std::vector<Student> &listaStudenata,
		std::vector<Predmet> &listaPredmeta);

#endif /* ZAJEDNICKEMETODE_H_ */
