/*
 * ZajednickeMetode.cpp
 *
 *  Created on: Dec 5, 2017
 *      Author: muhamed
 */

#include "ZajednickeMetode.h"

void prikazListeNastavnika(std::vector<Nastavnik> listaNastavnika){
	std::cout << "\nNastavnici: \n\n";
	ispisiListu(listaNastavnika);
	std::cout << std::endl;
}

void prikazListeStudijskihPrograma(std::vector<StudijskiProgram> studijskiProgrami){
	std::cout << "\nStudijski Programi: \n\n";
	ispisiListu(studijskiProgrami);
	std::cout << std::endl;
}

void prikazListePredmeta(std::vector<Predmet> predmeti){
	std::cout << "\nPredmeti: \n\n";
	ispisiListu(predmeti);
	std::cout << std::endl;
}

void prikazListeStudenata(std::vector<Student> studenti){
	std::cout << "\nStudenti: \n\n";
	ispisiListu(studenti);
	std::cout << std::endl;
}

void prikazListeUsmjerenja(std::vector<Usmjerenje> usmjerenja){
	std::cout << "\nUsmjerenja: \n\n";
	ispisiListu(usmjerenja);
	std::cout << std::endl;
}


void prikazListeIspita(std::vector<Ispit> ispiti){
	std::cout << "\nIspiti: \n\n";
	ispisiListu(ispiti);
	std::cout << std::endl;
}
