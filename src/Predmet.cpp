/*
 * Predmet.cpp
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#include "Predmet.h"

Predmet::Predmet(std::string aSifraPredmeta,
		std::string aNazivPredmeta,
		std::string aStudijskiP1,
		std::string aStudijskiP2,
		int aUSemestru,
		int aPredavanjaSati,
		int aAuditorneVjezbeS,
		int aLabVjezbeS,
		int aNosiEcts,
		int aTrajeSemestara){

	sifraPredmeta = aSifraPredmeta;
	nazivPredmeta = aNazivPredmeta;
	studijskiProgram1 = aStudijskiP1;
	studijskiProgram2 = aStudijskiP2;
	uSemestru = aUSemestru;
	predavanjaSati = aPredavanjaSati;
	auditorneVjezbeSati = aAuditorneVjezbeS;
	labVjezbeSati = aLabVjezbeS;
	nosiEcts = aNosiEcts;
	trajeSemestara = aTrajeSemestara;

}

Predmet::~Predmet() {}

void Predmet::ispisiPodatke(){
	std::cout << "Sifra Predmeta: " << getSifraP() << '\n';
	std::cout << "Puni naziv predmeta: " << getNazivP() << "\n";
	std::cout << "Studijski Program 1 : " << getSP1() << '\n';
	std::cout << "Studijski Program 2: " << getSP2() << '\n';
	std::cout << "U Semestru: " << getUSemestru() << "\n";
	std::cout << "Sedmično sati predavanja: " << getPredavanjaSati() << '\n';
	std::cout << "Sedmično sati auditorne: " << getAuditorneVSati() << "\n";
	std::cout << "Sedmično sati laboratorijske: " << getLabVSati() << "\n";
	std::cout << "Nosi Ects: " << getNosiEcts() << "\n";
	std::cout << "Traje Semestara: " << getTrajeSemestara() << "\n\n";

}

