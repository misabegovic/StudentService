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

std::vector<Nastavnik> promjeniListuNastavnika(std::vector<Nastavnik> listaNastavnika){

	std::cout << "Ulazite u promjeniNastavnika \n";
	std::cout << "Nadjite nastavnika kojeg zelite promjeniti po JMBG: \n\n";

	std::string jmbgNastavnika;
	std::cin >> jmbgNastavnika;
	bool nastavnikFound = false;
	std::vector<Nastavnik>::iterator iter;

	for(iter = listaNastavnika.begin(); iter != listaNastavnika.end(); ++iter){
		if((*iter).getJmbg() == jmbgNastavnika){
			promjeniNastavnika((*iter));
			nastavnikFound = true;
		}
	}

	if(!nastavnikFound){
		std::cout << "Nastavnik sa takvim JMBG-om ne postoji u bazi \n";
	}

	return listaNastavnika;

}

std::vector<StudijskiProgram> promjeniListuStudijskihPrograma(std::vector<StudijskiProgram> studijskiProgrami){

	std::cout << "Ulazite u promjeniListuStudijskihPrograma \n";
	std::cout << "Nadjite studijski program kojega zelite promjeniti po kratici (2 slova): \n\n";

	std::string shortTitle;
	std::cin >> shortTitle;
	bool spFound = false;
	std::vector<StudijskiProgram>::iterator iter;

	for(iter = studijskiProgrami.begin(); iter != studijskiProgrami.end(); ++iter){
		if((*iter).getShortTitle() == shortTitle){
			promjeniStudijskiProgram((*iter));
			spFound = true;
		}
	}

	if(!spFound){
		std::cout << "Studijski Program sa takvom kraticom ne postoji u bazi \n";
	}

	return studijskiProgrami;
}

std::vector<Predmet> promjeniListuPredmeta(std::vector<Predmet> listaPredmeta){

	std::cout << "Ulazite u promjeniListuPredmeta \n";
	std::cout << "Nadjite predmet koji zelite promjeniti po sifri (2 slova): \n\n";

	std::string sifraPredmeta;
	std::cin >> sifraPredmeta;
	bool spFound = false;
	std::vector<Predmet>::iterator iter;

	for(iter = listaPredmeta.begin(); iter != listaPredmeta.end(); ++iter){
		if((*iter).getSifraP() == sifraPredmeta){
			promjeniPredmet((*iter));
			spFound = true;
		}
	}

	if(!spFound){
		std::cout << "Predmet sa takvom kraticom ne postoji u bazi \n";
	}

	return listaPredmeta;
}

std::vector<Student> promjeniListuStudenata(std::vector<Student> listaStudenata){

	std::cout << "Ulazite u promjeniListuStudenata \n";
	std::cout << "Nadjite studenta kojeg zelite promjeniti po JMBG: \n\n";

	std::cout << "JMBG: ";
	std::string jmbgStudenta;
	std::cin >> jmbgStudenta;
	bool studentFound = false;
	std::vector<Student>::iterator iter;

	for(iter = listaStudenata.begin(); iter != listaStudenata.end(); ++iter){
		if((*iter).getJmbg() == jmbgStudenta){
			promjeniStudenta((*iter));
			studentFound = true;
		}
	}

	if(!studentFound){
		std::cout << "Student sa takvim JMBG-om ne postoji u bazi \n";
	}

	return listaStudenata;

}

std::vector<Usmjerenje> promjeniListuUsmjerenja(std::vector<Usmjerenje> listaUsmjerenja){

	std::cout << "Ulazite u promjeniListuUsmjerenja \n";
	std::cout << "Nadjite usmjerenje koje zelite promjeniti po kratici (2 slova): \n\n";

	std::cout << "Kratica: ";
	std::string kratica;
	std::cin >> kratica;
	std::cout << '\n';
	bool usmjerenjeFound = false;
	std::vector<Usmjerenje>::iterator iter;

	for(iter = listaUsmjerenja.begin(); iter != listaUsmjerenja.end(); ++iter){
		if((*iter).getShortName() == kratica){
			promjeniUsmjerenje((*iter));
			usmjerenjeFound = true;
		}
	}

	if(!usmjerenjeFound){
		std::cout << "Usmjerenje sa takvom kraticom ne postoji u bazi \n";
	}

	return listaUsmjerenja;
}

std::vector<Ispit> promjeniListuIspita(std::vector<Ispit> listaIspita){

	std::cout << "Ulazite u promjeniListuIspita \n";
	std::cout << "Nadjite ispit koje zelite promjeniti po 3 parametra \n";
	std::cout << "Potrebno je da unesete sifru predmeta, JMBG profesora i index studenta \n";

	std::cin.clear();
	std::cout << "Sifra Predmeta: ";
	std::string sifraPredmeta;
	std::cin >> sifraPredmeta;
	std::cout << '\n';
	std::cin.clear();

	std::cout << "JMBG profesora: ";
	std::string jmbgProfesora;
	std::cin >> jmbgProfesora;
	std::cout << '\n';
	std::cin.clear();

	std::cout << "Index studenta: ";
	std::string indexStudenta;
	std::cin >> indexStudenta;
	std::cout << '\n';
	std::cin.clear();

	bool usmjerenjeFound = false;
	std::vector<Ispit>::iterator iter;

	for(iter = listaIspita.begin(); iter != listaIspita.end(); ++iter){
		if(
			(*iter).getPredmetShort() == sifraPredmeta &&
			(*iter).getProfesorJmbg() == jmbgProfesora &&
			(*iter).getStudentIndexNr() == indexStudenta
			){
			promjeniIspit((*iter));
			usmjerenjeFound = true;
		}
	}

	if(!usmjerenjeFound){
		std::cout << "Usmjerenje sa takvim parametrima ne postoji u bazi \n";
	}

	return listaIspita;
}

void promjeniNastavnika(Nastavnik &aNastavnik){
	std::cout << "Nastavnik prije editovanja: \n\n";
	aNastavnik.ispisiPodatke();

	std::cout << "Sta zelite promjeniti? \n\n";
	std::cout << "Upisite // kada zavrsite sa promjenama \n";
	std::cout << "Dostupno za promjenu: ime , prezime , pozicija , predmet \n\n";

	std::cout << "Promjena: ";
	std::string aTemp;
	std::cin >> aTemp;
	std::cout << '\n';

	while(aTemp != "//"){

		if( aTemp == "ime"){
			std::cout << "Upisite novo ime: ";
			std::string aIme;
			std::cin >> aIme;
			aNastavnik.setFirstName(aIme);
			std::cout << '\n';
		}else if(aTemp == "prezime"){
			std::cout << "Upisite novo prezime: ";
			std::string aPrezime;
			std::cin >> aPrezime;
			aNastavnik.setLastName(aPrezime);
			std::cout << '\n';
		}else if(aTemp == "pozicija"){
			std::cout << "Upisite novu poziciju: ";
			std::string aPoz;
			std::cin >> aPoz;
			aNastavnik.setPosition(aPoz);
			std::cout << '\n';
		}else if(aTemp == "predmet"){
			std::cout << "Upisite novi predmet: ";
			std::string aPred;
			std::cin >> aPred;
			aNastavnik.setSubject(aPred);
			std::cout << '\n';
		}else{
			std::cout << "Niste unijeli ispravan naziv varijable \n";
		}

		std::cout << "Upisite // kada zavrsite sa promjenama \n";
		std::cout << "Dostupno za promjenu: ime , prezime , pozicija , predmet \n\n";

		std::cin.clear();
		std::cin >> aTemp;

	}

	std::cout << "Nastavnik poslije editovanja: \n\n";
	aNastavnik.ispisiPodatke();
}

void promjeniStudijskiProgram(StudijskiProgram &aSP){
	std::cout << "Studijski program prije editovanja: \n\n";
	aSP.ispisiPodatke();

	std::cout << "Sta zelite promjeniti? \n\n";
	std::cout << "Upisite // kada zavrsite sa promjenama \n";
	std::cout << "Dostupno za promjenu: kratica , puniNaziv \n\n";

	std::cout << "Promjena: ";
	std::string aTemp;
	std::cin >> aTemp;
	std::cout << '\n';

	while(aTemp != "//"){

		if( aTemp == "kratica"){
			std::cout << "Upisite novu kraticu koje zelite (2 slova): \n\n";
			std::string aKratica;
			std::cin >> aKratica;
			while(aKratica.length() <= 0 || aKratica.length() > 2){
				std::cout << "Ponovo upisite novu kraticu koje zelite\n";
				std::cout << "Ne smije biti veca od 2 slova: \n\n";
				std::cin.clear();
				std::cin >> aKratica;
			}
			aSP.setShortTitle(aKratica);
		}else if(aTemp == "puniNaziv"){
			std::cout << "Upisite novi naziv koje zelite: \n\n";
			std::string aPuniNaziv;
			std::cin >> aPuniNaziv;
			aSP.setFullTitle(aPuniNaziv);
		}else{
			std::cout << "Niste unijeli ispravan naziv varijable \n";
		}

		std::cout << "Upisite // kada zavrsite sa promjenama \n";
		std::cout << "Dostupno za promjenu: kratica , puniNaziv \n\n";

		std::cin.clear();
		std::cin >> aTemp;

	}

	std::cout << "Studijski program poslije editovanja: \n\n";
	aSP.ispisiPodatke();
}

void promjeniPredmet(Predmet &aPredmet){
	std::cout << "Studijski program prije editovanja: \n\n";
	aPredmet.ispisiPodatke();

	std::cout << "Sta zelite promjeniti? \n\n";
	std::cout << "Upisite // kada zavrsite sa promjenama \n";
	std::cout << "Dostupno za promjenu: \n\n";
	std::cout << "sifraPredmeta , nazivPredmeta , studijskiProgram1, studijskiProgram2 \n";
	std::cout << "uSemestru, predavanjaSati, auditorneSati \n";
	std::cout << "labVjezbeSati , nosiEcts , trajeSemestara \n\n";

	std::cout << "Promjena: ";
	std::string aTemp;
	std::cin >> aTemp;
	std::cout << '\n';

	while(aTemp != "//"){

		if( aTemp == "sifraPredmeta"){
			std::cout << "Upisite novu sifru predmeta (2 slova): ";
			std::string aSifra;
			std::cin >> aSifra;
			while(aSifra.length() <= 0 || aSifra.length() > 2){
				std::cout << "Ponovo upisite novu sifru koje zelite: \n";
				std::cout << "Ne smije biti duza od 2 slova \n";
				std::cout << "Nova sifra: ";
				std::cin.clear();
				std::cin >> aSifra;
			}
			aPredmet.setSifraP(aSifra);
			std::cout << '\n';
		}else if(aTemp == "nazivPredmeta"){
			std::cout << "Upisite novi naziv: ";
			std::string aPuniNaziv;
			std::cin >> aPuniNaziv;
			aPredmet.setNazivP(aPuniNaziv);
			std::cout << '\n';
		}else if(aTemp == "studijskiProgram1"){
			std::cout << "Upisite novu kraticu za studijski program 1 (2 slova): ";
			std::string kratica;
			std::cin >> kratica;
			while(kratica.length() <= 0 || kratica.length() > 2){
				std::cout << "Ponovo upisite novu kraticu koje zelite\n";
				std::cout << "Ne smije biti duza od 2 slova \n";
				std::cout << "Nova kratica: ";
				std::cin.clear();
				std::cin >> kratica;
			}
			aPredmet.setSP1(kratica);
			std::cout << '\n';
		}else if(aTemp == "studijskiProgram2"){
			std::cout << "Upisite novu kraticu za studijski program 2 (2 slova): ";
			std::string kratica;
			std::cin >> kratica;
			while(kratica.length() <= 0 || kratica.length() > 2){
				std::cout << "Ponovo upisite novu sifru koje zelite\n";
				std::cout << "Ne smije biti duza od 2 slova \n";
				std::cout << "Nova kratica: ";
				std::cin.clear();
				std::cin >> kratica;
			}
			aPredmet.setSP2(kratica);
			std::cout << '\n';
		}else if(aTemp == "uSemestru"){
			std::cout << "Upisite novi broj semestra: ";
			int brSem;
			std::cin >> brSem;
			aPredmet.setUSemestru(brSem);
			std::cout << '\n';
		}else if(aTemp == "predavanjaSati"){
			std::cout << "Upisite novi broj sedmicnih sati za predavanja: ";
			int brSati;
			std::cin >> brSati;
			aPredmet.setPredavanjaSati(brSati);
			std::cout << '\n';
		}else if(aTemp == "auditorneSati"){
			std::cout << "Upisite novi broj sedmicnih sati za auditorne vjezbe: ";
			int brSati;
			std::cin >> brSati;
			aPredmet.setAuditorneSati(brSati);
			std::cout << '\n';
		}else if(aTemp == "labVjezbeSati"){
			std::cout << "Upisite novi broj sedmicnih sati za laboratorijske vjezbe: ";
			int brSati;
			std::cin >> brSati;
			aPredmet.setLabVSati(brSati);
			std::cout << '\n';
		}else if(aTemp == "nosiEcts"){
			std::cout << "Upisite novi broj ECTS-ova za predmet: ";
			int brEcts;
			std::cin >> brEcts;
			aPredmet.setNosiEcts(brEcts);
			std::cout << '\n';
		}else if(aTemp == "trajeSemestara"){
			std::cout << "Upisite trajanjeSemestara za predmet: ";
			int brSemestara;
			std::cin >> brSemestara;
			aPredmet.setTrajeSemestara(brSemestara);
			std::cout << '\n';
		}else{
			std::cout << "Niste unijeli ispravan naziv varijable \n";
		}

		std::cout << "Upisite // kada zavrsite sa promjenama \n";
		std::cout << "Dostupno za promjenu: \n\n";
		std::cout << "sifraPredmeta , nazivPredmeta , studijskiProgram1, studijskiProgram2 \n";
		std::cout << "uSemestru, predavanjaSati, auditorneSati \n";
		std::cout << "labVjezbeSati , nosiEcts , trajeSemestara \n\n";

		std::cin.clear();
		std::cin >> aTemp;

	}

	std::cout << "Studijski program poslije editovanja: \n\n";
	aPredmet.ispisiPodatke();
}

void promjeniStudenta(Student &aStudent){
	std::cout << "Student prije editovanja: \n\n";
	aStudent.ispisiPodatke();

	std::cout << "Sta zelite promjeniti? \n\n";
	std::cout << "Upisite // kada zavrsite sa promjenama \n";
	std::cout << "Dostupno za promjenu: ime , prezime , brIndexa , smjer \n\n";

	std::cout << "Promjeni: ";
	std::string aTemp;
	std::cin >> aTemp;
	std::cout << '\n';

	while(aTemp != "//"){

		if( aTemp == "ime"){
			std::cout << "Upisite novo ime: ";
			std::string aIme;
			std::cin >> aIme;
			aStudent.setFirstName(aIme);
			std::cout << '\n';
		}else if(aTemp == "prezime"){
			std::cout << "Upisite novo prezime: ";
			std::string aPrezime;
			std::cin >> aPrezime;
			aStudent.setLastName(aPrezime);
			std::cout << '\n';
		}else if(aTemp == "brIndexa"){
			std::cout << "Upisite novi br indexa: ";
			std::string brIndexa;
			std::cin >> brIndexa;
			aStudent.setBrIndexa(brIndexa);
			std::cout << '\n';
		}else if(aTemp == "smjer"){
			std::cout << "Upisite novi smjer: ";
			std::string aSmjer;
			std::cin >> aSmjer;
			aStudent.setSmjer(aSmjer);
			std::cout << '\n';
		}else{
			std::cout << "Niste unijeli ispravan naziv varijable \n";
		}

		std::cout << "Upisite // kada zavrsite sa promjenama \n";
		std::cout << "Dostupno za promjenu: ime , prezime , brIndexa , smjer \n\n";

		std::cout << "Promjeni: ";
		std::cin.clear();
		std::cin >> aTemp;

	}

	std::cout << "Student poslije editovanja: \n\n";
	aStudent.ispisiPodatke();
}

void promjeniUsmjerenje(Usmjerenje &aUsmjerenje){
	std::cout << "Usmjerenje prije editovanja: \n\n";
	aUsmjerenje.ispisiPodatke();

	std::cout << "Sta zelite promjeniti? \n\n";
	std::cout << "Upisite // kada zavrsite sa promjenama \n";
	std::cout << "Dostupno za promjenu: kratica , puniNaziv , nazivStudijskogPrograma \n\n";

	std::cout << "Promjeni: ";
	std::string aTemp;
	std::cin >> aTemp;
	std::cout << '\n';

	while(aTemp != "//"){

		if( aTemp == "kratica"){
			std::cout << "Upisite novu kraticu (2 slova): ";
			std::string aKratica;
			std::cin >> aKratica;
			while(aKratica.length() <= 0 || aKratica.length() > 2){
				std::cout << "Ponovo upisite novu kraticu koje zelite\n";
				std::cout << "Ne smije biti veca od 2 slova \n";
				std::cout << "Nova kratica: ";
				std::cin.clear();
				std::cin >> aKratica;
				std::cout << '\n';
			}
			aUsmjerenje.setShortName(aKratica);
			std::cout << '\n';
		}else if(aTemp == "puniNaziv"){
			std::cout << "Upisite novi naziv: ";
			std::string puniNaziv;
			std::cin >> puniNaziv;
			aUsmjerenje.setFullName(puniNaziv);
			std::cout << '\n';
		}else if(aTemp == "nazivStudijskogPrograma"){
			std::cout << "Upisite novi naziv studijskog programa: ";
			std::string nazivPrograma;
			std::cin >> nazivPrograma;
			aUsmjerenje.setNazivSP(nazivPrograma);
			std::cout << '\n';
		}else{
			std::cout << "Niste unijeli ispravan naziv varijable \n";
		}

		std::cout << "Upisite // kada zavrsite sa promjenama \n";
		std::cout << "Dostupno za promjenu: kratica , puniNaziv , nazivStudijskogPrograma \n\n";

		std::cout << "Promjeni: ";
		std::cin.clear();
		std::cin >> aTemp;
		std::cout << '\n';

	}

	std::cout << "Usmjerenje poslije editovanja: \n\n";
	aUsmjerenje.ispisiPodatke();
}

void promjeniIspit(Ispit &aIspit){

	std::cout << "Ispit prije editovanja: \n\n";
	aIspit.ispisiPodatke();

	std::cout << "Sta zelite promjeniti? \n\n";
	std::cout << "Upisite // kada zavrsite sa promjenama \n";
	std::cout << "Dostupno za promjenu: sifraPredmeta , jmbgProfesora , brojIndexa , datum , ocjena \n\n";

	std::cout << "Promjeni: ";
	std::string aTemp;
	std::cin >> aTemp;
	std::cout << '\n';

	while(aTemp != "//"){

		if( aTemp == "sifraPredmeta"){
			std::cout << "Upisite novu sifru predmeta (2 slova): ";
			std::string aKratica;
			std::cin >> aKratica;
			while(aKratica.length() <= 0 || aKratica.length() > 2){
				std::cout << "Ponovo upisite novu sifru predmeta koju zelite\n";
				std::cout << "Ne smije biti duza od 2 slova \n";
				std::cout << "Nova sifra predmeta: ";
				std::cin.clear();
				std::cin >> aKratica;
				std::cout << '\n';
			}
			aIspit.setPredmetShort(aKratica);
			std::cout << '\n';
		}else if(aTemp == "jmbgProfesora"){
			std::cout << "Upisite novi naziv: ";
			std::string jmbgProfesora;
			std::cin >> jmbgProfesora;
			aIspit.setProfesorJmbg(jmbgProfesora);
			std::cout << '\n';
		}else if(aTemp == "brojIndexa"){
			std::cout << "Upisite novi broj indexa: ";
			std::string brojIndexa;
			std::cin >> brojIndexa;
			aIspit.setStudentIndexNr(brojIndexa);
			std::cout << '\n';
		}else if(aTemp == "datum"){
			std::cout << "Upisite novi datum: ";
			std::string datum;
			std::cin >> datum;
			aIspit.setTheDate(datum);
			std::cout << '\n';
		}else if(aTemp == "ocjena"){
			std::cout << "Upisite novu ocjenu: ";
			std::string ocjena;
			std::cin >> ocjena;
			aIspit.setTheGrade(ocjena);
			std::cout << '\n';
		}else{
			std::cout << "Niste unijeli ispravan naziv varijable \n";
		}

		std::cout << "Upisite // kada zavrsite sa promjenama \n";
		std::cout << "Dostupno za promjenu: sifraPredmeta , jmbgProfesora , brojIndexa , datum , ocjena \n\n";

		std::cout << "Promjeni: ";
		std::cin.clear();
		std::cin >> aTemp;
		std::cout << '\n';

	}

	std::cout << "Ispit poslije editovanja: \n\n";
	aIspit.ispisiPodatke();


}

void obrisiIzListeNastavnika(std::vector<Nastavnik> &listaNastavnika){
	std::cout << "Ulazite u obrisiIzListeNastavnika \n";
	std::cout << "Nadjite nastavnika kojeg zelite izbrisati po JMBG-u (13 znakova): \n\n";

	prikazListeNastavnika(listaNastavnika);
	std::cout << "\n\n";

	std::cout << "JMBG: ";
	std::string jmbgNastavnika;
	std::cin.clear();
	std::cin >> jmbgNastavnika;
	std::cout << '\n';

	while(jmbgNastavnika != "//"){
		bool nastavnikFound = false;

		for(unsigned int i = 0; i < listaNastavnika.size(); i++){
			if(listaNastavnika[i].getJmbg() == jmbgNastavnika){
				listaNastavnika[i] = listaNastavnika.back();
				listaNastavnika.pop_back();
				nastavnikFound = true;
				i--;
				break;
			}
		}

		if(!nastavnikFound){
			std::cout << "Nastavnik sa takvim JMBG-om ne postoji u bazi \n";
		}

		std::cout << "Za brisanje nastavnika, unesite novi JMBG \n";
		std::cout << "Za izlazak iz akcije brisanja, upisite // \n\n";
		std::cin.clear();
		std::cin >> jmbgNastavnika;
		std::cout << '\n';
	}
}

void obrisiIzListeStudijskihPrograma(std::vector<StudijskiProgram> &listaSP){
	std::cout << "Ulazite u obrisiIzListeStudijskihPrograma \n";
	std::cout << "Nadjite studijski program koji zelite izbrisati po kratici (2 znaka): \n\n";

	prikazListeStudijskihPrograma(listaSP);
	std::cout << "\n\n";

	std::cout << "Kratica: ";
	std::string kratica;
	std::cin.clear();
	std::cin >> kratica;
	std::cout << '\n';

	while(kratica != "//"){
		bool found = false;

		for(unsigned int i = 0; i < listaSP.size(); i++){
			if(listaSP[i].getShortTitle() == kratica){
				listaSP[i] = listaSP.back();
				listaSP.pop_back();
				found = true;
				i--;
				break;
			}
		}

		if(!found){
			std::cout << "Nastavnik sa takvim JMBG-om ne postoji u bazi \n";
		}

		std::cout << "Za brisanje nastavnika, unesite novu kraticu \n";
		std::cout << "Za izlazak iz akcije brisanja, upisite // \n\n";
		std::cin.clear();
		std::cin >> kratica;
		std::cout << '\n';
	}
}

void obrisiIzListePredmeta(std::vector<Predmet> &listaPredmeta){
	std::cout << "Ulazite u obrisiIzListePredmeta \n";
	std::cout << "Nadjite predmet koji zelite izbrisati po sifri predmeta (2 znaka): \n\n";

	prikazListePredmeta(listaPredmeta);
	std::cout << "\n\n";

	std::cout << "Sifra: ";
	std::string sifra;
	std::cin.clear();
	std::cin >> sifra;
	std::cout << '\n';

	while(sifra != "//"){
		bool found = false;

		for(unsigned int i = 0; i < listaPredmeta.size(); i++){
			if(listaPredmeta[i].getSifraP() == sifra){
				listaPredmeta[i] = listaPredmeta.back();
				listaPredmeta.pop_back();
				found = true;
				i--;
				break;
			}
		}

		if(!found){
			std::cout << "Nastavnik sa takvim JMBG-om ne postoji u bazi \n";
		}

		std::cout << "Za brisanje nastavnika, unesite novu sifru \n";
		std::cout << "Za izlazak iz akcije brisanja, upisite // \n\n";
		std::cin.clear();
		std::cin >> sifra;
		std::cout << '\n';
	}
}

void obrisiIzListeStudenata(std::vector<Student> &listaStudenata){
	std::cout << "Ulazite u obrisiIzListeStudenata \n";
	std::cout << "Nadjite studenta kojeg zelite izbrisati po JMBG-u (13 znakova): \n\n";

	prikazListeStudenata(listaStudenata);
	std::cout << "\n\n";

	std::cout << "JMBG: ";
	std::string jmbgS;
	std::cin.clear();
	std::cin >> jmbgS;
	std::cout << '\n';

	while(jmbgS != "//"){
		bool found = false;

		for(unsigned int i = 0; i < listaStudenata.size(); i++){
			if(listaStudenata[i].getJmbg() == jmbgS){
				listaStudenata[i] = listaStudenata.back();
				listaStudenata.pop_back();
				found = true;
				i--;
				break;
			}
		}

		if(!found){
			std::cout << "Nastavnik sa takvim JMBG-om ne postoji u bazi \n";
		}

		std::cout << "Za brisanje studenta, unesite novi JMBG \n";
		std::cout << "Za izlazak iz akcije brisanja, upisite // \n\n";
		std::cin.clear();
		std::cin >> jmbgS;
		std::cout << '\n';
	}
}

void obrisiIzListeUsmjerenja(std::vector<Usmjerenje> &listaUsmjerenja){
	std::cout << "Ulazite u obrisiIzListeUsmjerenja \n";
	std::cout << "Nadjite usmjerenje koje zelite izbrisati po kratici (2 znaka): \n\n";

	prikazListeUsmjerenja(listaUsmjerenja);
	std::cout << "\n\n";

	std::cout << "JMBG: ";
	std::string kratica;
	std::cin.clear();
	std::cin >> kratica;
	std::cout << '\n';

	while(kratica != "//"){
		bool found = false;

		for(int i = 0; i < listaUsmjerenja.size(); i++){
			if(listaUsmjerenja[i].getShortName() == kratica){
				listaUsmjerenja[i] = listaUsmjerenja.back();
				listaUsmjerenja.pop_back();
				found = true;
				i--;
				break;
			}
		}

		if(!found){
			std::cout << "Nastavnik sa takvim JMBG-om ne postoji u bazi \n";
		}

		std::cout << "Za brisanje nastavnika, unesite novi JMBG \n";
		std::cout << "Za izlazak iz akcije brisanja, upisite // \n\n";
		std::cin.clear();
		std::cin >> kratica;
		std::cout << '\n';
	}
}

void obrisiIzListeIspita(std::vector<Ispit> &listaIspita){
	std::cout << "Ulazite u obrisiIzListeUsmjerenja \n";
	std::cout << "Nadjite usmjerenje koje zelite izbrisati po kratici (2 znaka): \n\n";

	prikazListeIspita(listaIspita);
	std::cout << "\n\n";

	std::cout << "JMBG profesora: ";
	std::string jmbgP;
	std::cin.clear();
	std::cin >> jmbgP;
	std::cout << '\n';

	std::cout << "brIndexa Studenta: ";
	std::string brIndexa;
	std::cin.clear();
	std::cin >> brIndexa;
	std::cout << '\n';

	std::cout << "Kratica predmeta: ";
	std::string kraticaP;
	std::cin.clear();
	std::cin >> kraticaP;
	std::cout << '\n';

	while(jmbgP != "//"){
		bool found = false;

		for(int i = 0; i < listaIspita.size(); i++){
			if(listaIspita[i].getProfesorJmbg() == jmbgP &&
					listaIspita[i].getPredmetShort() == kraticaP &&
					listaIspita[i].getStudentIndexNr() == brIndexa
					){
				listaIspita[i] = listaIspita.back();
				listaIspita.pop_back();
				found = true;
				i--;
				break;
			}
		}

		if(!found){
			std::cout << "Nastavnik sa takvim JMBG-om ne postoji u bazi \n";
		}

		std::cout << "Za brisanje ispita, unesite novi JMBG profesora, brIndexa Studenta i kraticu predmeta \n";
		std::cout << "Za izlazak iz akcije brisanja, upisite // \n\n";

		std::cin.clear();
		std::cout << "JMBG profesora: ";
		std::cin >> jmbgP;
		std::cout << '\n';

		std::cout << "brIndexa Studenta: ";
		std::string brIndexa;
		std::cin.clear();
		std::cin >> brIndexa;
		std::cout << '\n';

		std::cout << "Kratica predmeta: ";
		std::string kraticaP;
		std::cin.clear();
		std::cin >> kraticaP;
		std::cout << '\n';
	}
}
