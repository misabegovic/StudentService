/*
 * Predmet.h
 *
 *  Created on: Dec 4, 2017
 *      Author: muhamed
 */

#ifndef PREDMET_H_
#define PREDMET_H_

#include <iostream>
#include <string>

class Predmet {
private:
	std::string sifraPredmeta;
	std::string nazivPredmeta;
	std::string studijskiProgram1;
	std::string studijskiProgram2;
	int uSemestru;
	int predavanjaSati;
	int auditorneVjezbeSati;
	int labVjezbeSati;
	int nosiEcts;
	int trajeSemestara;
public:
	Predmet();
	Predmet(std::string aSifraPredmeta,
			std::string aNazivPredmeta,
			std::string aStudijskiP1,
			std::string aStudijskiP2,
			int aUSemestru,
			int aPredavanjaSati,
			int aAuditorneVjezbeS,
			int aLabVjezbeS,
			int aNosiEcts,
			int aTrajeSemestara);
	virtual ~Predmet();
	std::string getSifraP(){ return sifraPredmeta; }
	std::string getNazivP(){ return nazivPredmeta; }
	std::string getSP1(){ return studijskiProgram1; }
	std::string getSP2(){ return studijskiProgram2; }
	int getUSemestru(){ return uSemestru; }
	int getPredavanjaSati(){ return predavanjaSati; }
	int getAuditorneVSati(){ return auditorneVjezbeSati; }
	int getLabVSati(){ return labVjezbeSati; }
	int getNosiEcts(){ return nosiEcts; }
	int getTrajeSemestara(){ return trajeSemestara; }
	void setSifraP(std::string aSifraP){ sifraPredmeta = aSifraP; }
	void setNazivP(std::string aNazivP){ nazivPredmeta = aNazivP; }
	void setSP1(std::string aSP1){ studijskiProgram1 = aSP1; }
	void setSP2(std::string aSP2){ studijskiProgram2 = aSP2; }
	void setUSemestru(int aUSemestru){ uSemestru = aUSemestru; }
	void setPredavanjaSati(int aPredavanjaSati){ predavanjaSati = aPredavanjaSati; }
	void setAuditorneSati(int aAuditSati){ auditorneVjezbeSati = aAuditSati; }
	void setLabVSati(int aLabVSati){ labVjezbeSati = aLabVSati; }
	void setNosiEcts(int aNosiEcts){ nosiEcts = aNosiEcts; }
	void setTrajeSemestara(int aTrajeSem){ trajeSemestara = aTrajeSem; }
	void ispisiPodatke();
};

#endif /* PREDMET_H_ */
