/*
 * ZajednickeMetode.cpp
 *
 *  Created on: Dec 5, 2017
 *      Author: muhamed
 */

#include "ZajednickeMetode.h"

void prikazListeNastavnika(std::vector<Nastavnik> listaNastavnika){
	std::cout << "Nastavnici: " << std::endl << std::endl;
	ispisiListu(listaNastavnika);
	std::cout << std::endl;
}

void prikazListeStudijskihPrograma(std::vector<StudijskiProgram> studijskiProgrami){
	std::cout << "Studijski Programi: " << std::endl << std::endl;
	ispisiListu(studijskiProgrami);
	std::cout << std::endl;
}

void prikazListePredmeta(std::vector<Predmet> predmeti){
	std::cout << "Predmeti: " << std::endl << std::endl;
	ispisiListu(predmeti);
	std::cout << std::endl;
}

void prikazListeStudenata(std::vector<Student> studenti){
	std::cout << "Studenti: " << std::endl << std::endl;
	ispisiListu(studenti);
	std::cout << std::endl;
}

void prikazListeUsmjerenja(std::vector<Usmjerenje> usmjerenja){
	std::cout << "Usmjerenja: " << std::endl << std::endl;
	ispisiListu(usmjerenja);
	std::cout << std::endl;
}


void prikazListeIspita(std::vector<Ispit> ispiti){
	std::cout << "Ispiti: " << std::endl << std::endl;
	ispisiListu(ispiti);
	std::cout << std::endl;
}
