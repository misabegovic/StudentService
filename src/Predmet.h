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
	std::string uSemestru;
	std::string predavanjaSati;
	std::string auditorneVjezbeSati;
	std::string labVjezbeSati;
	std::string nosiEcts;
	std::string trajeSemestara;
public:
	Predmet();
	Predmet(std::string aSifraPredmeta,
			std::string aNazivPredmeta,
			std::string aStudijskiP1,
			std::string aStudijskiP2,
			std::string aUSemestru,
			std::string aPredavanjaSati,
			std::string aAuditorneVjezbeS,
			std::string aLabVjezbeS,
			std::string aNosiEcts,
			std::string aTrajeSemestara);
	virtual ~Predmet();
	std::string getSifraP(){ return sifraPredmeta; }
	std::string getNazivP(){ return nazivPredmeta; }
	std::string getSP1(){ return studijskiProgram1; }
	std::string getSP2(){ return studijskiProgram2; }
	std::string getUSemestru(){ return uSemestru; }
	std::string getPredavanjaSati(){ return predavanjaSati; }
	std::string getAuditorneVSati(){ return auditorneVjezbeSati; }
	std::string getLabVSati(){ return labVjezbeSati; }
	std::string getNosiEcts(){ return nosiEcts; }
	std::string getTrajeSemestara(){ return trajeSemestara; }
	void setSifraP(std::string aSifraP){ sifraPredmeta = aSifraP; }
	void setNazivP(std::string aNazivP){ nazivPredmeta = aNazivP; }
	void setSP1(std::string aSP1){ studijskiProgram1 = aSP1; }
	void setSP2(std::string aSP2){ studijskiProgram2 = aSP2; }
	void setUSemestru(std::string aUSemestru){ uSemestru = aUSemestru; }
	void setPredavanjaSati(std::string aPredavanjaSati){ predavanjaSati = aPredavanjaSati; }
	void setAuditorneSati(std::string aAuditSati){ auditorneVjezbeSati = aAuditSati; }
	void setLabVSati(std::string aLabVSati){ labVjezbeSati = aLabVSati; }
	void setNosiEcts(std::string aNosiEcts){ nosiEcts = aNosiEcts; }
	void setTrajeSemestara(std::string aTrajeSem){ trajeSemestara = aTrajeSem; }
	void ispisiPodatke();
};

#endif /* PREDMET_H_ */
