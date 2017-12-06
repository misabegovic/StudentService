/*
 * MyFunctions.cpp
 *
 *  Created on: Nov 27, 2017
 *      Author: muhamed
 */

#include "CitanjeUpisivanjeFileova.h"

void updateNastavnikFile(std::vector<Nastavnik> listaNastavnika)
{

  std::ofstream myfile;
  myfile.open ("datoteke/nastavnik.dat");

  std::vector<Nastavnik>::iterator it;
  it = listaNastavnika.begin();

  while(it != listaNastavnika.end()){
	  myfile << (*it).getJmbg() << "#";
	  myfile << (*it).getFirstName() << "#";
	  myfile << (*it).getLastName() << "#";
	  myfile << (*it).getPosition() << "#";
	  myfile << (*it).getSubject() << '\n';

	  it++;
  }

  myfile.close();

}

void updateSPFile(std::vector<StudijskiProgram> listaPrograma){

  std::ofstream myfile;
  myfile.open ("datoteke/studijskiProgram.dat");

  std::vector<StudijskiProgram>::iterator it;
  it = listaPrograma.begin();

  while(it != listaPrograma.end()){
	  myfile << (*it).getShortTitle() << "#";
	  myfile << (*it).getFullTitle() << '\n';

	  it++;
  }

  myfile.close();

}

void updatePredmetFile(std::vector<Predmet> listaPredmeta){
	std::ofstream myfile;
	myfile.open ("datoteke/predmet.dat");

	std::vector<Predmet>::iterator it;
	it = listaPredmeta.begin();

	while(it != listaPredmeta.end()){
	  myfile << (*it).getSifraP() << "#";
	  myfile << (*it).getNazivP() << "#";
	  myfile << (*it).getSP1() << "#";
	  myfile << (*it).getSP2() << "#";
	  myfile << (*it).getUSemestru() << "#";
	  myfile << (*it).getPredavanjaSati() << "#";
	  myfile << (*it).getAuditorneVSati() << "#";
	  myfile << (*it).getLabVSati() << "#";
	  myfile << (*it).getNosiEcts() << "#";
	  myfile << (*it).getTrajeSemestara() << '\n';

	  it++;
	}

	myfile.close();
}

void updateStudentFile(std::vector<Student> listaStudenata){

	std::ofstream myfile;
	myfile.open ("datoteke/student.dat");

	std::vector<Student>::iterator it;
	it = listaStudenata.begin();

	while(it != listaStudenata.end()){
	  myfile << (*it).getJmbg() << "#";
	  myfile << (*it).getFirstName() << "#";
	  myfile << (*it).getLastName() << "#";
	  myfile << (*it).getBrIndexa() << "#";
	  myfile << (*it).getSmjer() << '\n';

	  it++;
	}

	myfile.close();

}

void updateUsmjerenjeFile(std::vector<Usmjerenje> listaUsmjerenja){

	std::ofstream myfile;
	myfile.open ("datoteke/usmjerenje.dat");

	std::vector<Usmjerenje>::iterator it;
	it = listaUsmjerenja.begin();

	while(it != listaUsmjerenja.end()){
	  myfile << (*it).getShortName() << "#";
	  myfile << (*it).getFullName() << "#";
	  myfile << (*it).getNazivSP() << '\n';

	  it++;
	}

	myfile.close();

}

void updateIspitFile(std::vector<Ispit> listaIspita){

	std::ofstream myfile;
	myfile.open ("datoteke/ispit.dat");

	std::vector<Ispit>::iterator it;
	it = listaIspita.begin();

	while(it != listaIspita.end()){
	  myfile << (*it).getPredmetShort() << "#";
	  myfile << (*it).getProfesorJmbg() << "#";
	  myfile << (*it).getStudentIndexNr() << "#";
	  myfile << (*it).getTheDate() << "#";
	  myfile << (*it).getTheGrade() << '\n';

	  it++;
	}

	myfile.close();

}

std::vector<Nastavnik> readNastavnikFile(){

	std::vector<Nastavnik> kolekcijaNastavnika;
	std::string line;
	std::string aJmbg;
	std::string aFirstName;
	std::string aLastName;
	std::string aPosition;
	std::string aSubject;

	std::ifstream myfile ("datoteke/nastavnik.dat");
	if (myfile.is_open())
	{

		while(getline(myfile, line)) {

		  std::istringstream tokenizer(line);

		  if(tokenizer) {
			getline(tokenizer,aJmbg,'#');
			getline(tokenizer,aFirstName,'#');
			getline(tokenizer,aLastName,'#');
			getline(tokenizer,aPosition,'#');
			getline(tokenizer,aSubject);

			int jmbgCheck = nadjiElement(kolekcijaNastavnika, aJmbg);

			if(jmbgCheck == 0){

				Nastavnik aNastavnik(
							aJmbg,
							aFirstName,
							aLastName,
							aPosition,
							aSubject
					);

				kolekcijaNastavnika.push_back(aNastavnik);
			}
		  }
		}

		myfile.close();
	}
	else std::cout << "Unable to open file";

	return kolekcijaNastavnika;
}

std::vector<StudijskiProgram> readSPFile(){
	std::vector<StudijskiProgram> kolekcijaStudijskihPrograma;
	std::string line;
	std::string aShortTitle;
	std::string aFullTitle;

	std::ifstream myfile ("datoteke/studijskiProgram.dat");
	if (myfile.is_open())
	{

		while(getline(myfile, line)) {

		  std::istringstream tokenizer(line);

		  if(tokenizer) {
			getline (tokenizer,aShortTitle,'#');
			getline (tokenizer,aFullTitle);

			StudijskiProgram aStudijskiProgram(aShortTitle, aFullTitle);

			int checkShort = nadjiSPPoKratici(kolekcijaStudijskihPrograma, aShortTitle);

			if(checkShort == 0){
				StudijskiProgram aStudijskiProgram(aShortTitle, aFullTitle);
				kolekcijaStudijskihPrograma.push_back(aStudijskiProgram);
			}
		  }
		}
		myfile.close();
	}
	else std::cout << "Unable to open file";

	return kolekcijaStudijskihPrograma;
}

std::vector<Predmet> readPredmetFile(){

	std::vector<Predmet> kolekcijaPredmeta;
	std::string line;

	std::string aSifraPredmeta;
	std::string aNazivPredmeta;
	std::string aStudijskiP1;
	std::string aStudijskiP2;
	std::string aUSemestru;
	std::string aPredavanjaSati;
	std::string aAuditorneVjezbeS;
	std::string aLabVjezbeS;
	std::string aNosiEcts;
	std::string aTrajeSemestara;

	int uSemInt;
	int predInt;
	int audVjezInt;
	int labVjezInt;
	int ectsInt;
	int trajeSemInt;

	std::ifstream myfile ("datoteke/predmet.dat");
	if (myfile.is_open())
	{

		while(getline(myfile, line)) {

		  std::istringstream tokenizer(line);

		  if(tokenizer) {
			getline (tokenizer,aSifraPredmeta,'#');
			getline (tokenizer,aNazivPredmeta,'#');
			getline (tokenizer,aStudijskiP1,'#');
			getline (tokenizer,aStudijskiP2,'#');
			getline (tokenizer,aUSemestru,'#');
			getline (tokenizer,aPredavanjaSati,'#');
			getline (tokenizer,aAuditorneVjezbeS,'#');
			getline (tokenizer,aLabVjezbeS,'#');
			getline (tokenizer,aNosiEcts,'#');
			getline (tokenizer,aTrajeSemestara, '\n');

			std::stringstream(aUSemestru) >> uSemInt;
			std::stringstream(aPredavanjaSati) >> predInt;
			std::stringstream(aAuditorneVjezbeS) >> audVjezInt;
			std::stringstream(aLabVjezbeS) >> labVjezInt;
			std::stringstream(aNosiEcts) >> ectsInt;
			std::stringstream(aTrajeSemestara) >> trajeSemInt;

			int shortCheck = nadjiPredmetPoKratici(kolekcijaPredmeta, aSifraPredmeta);

			if(shortCheck == 0){

				Predmet aPredmet(
						aSifraPredmeta,
						aNazivPredmeta,
						aStudijskiP1,
						aStudijskiP2,
						uSemInt,
						predInt,
						audVjezInt,
						labVjezInt,
						ectsInt,
						trajeSemInt
						);

				kolekcijaPredmeta.push_back(aPredmet);
			}
		  }
		}
		myfile.close();
	}
	else std::cout << "Unable to open file";

	return kolekcijaPredmeta;
}

std::vector<Student> readStudentFile(){

	std::vector<Student> kolekcijaStudenata;
	std::string line;

	std::string aJmbg;
	std::string aFirstName;
	std::string aLastName;
	std::string aBrIndexa;
	std::string aSmijer;

	std::ifstream myfile ("datoteke/student.dat");
	if (myfile.is_open())
	{

		while(getline(myfile, line)) {

		  std::istringstream tokenizer(line);

		  if(tokenizer) {
			getline (tokenizer,aJmbg,'#');
			getline (tokenizer,aFirstName,'#');
			getline (tokenizer,aLastName,'#');
			getline (tokenizer,aBrIndexa,'#');
			getline (tokenizer,aSmijer,'\n');

			int indexCheck = nadjiStudentaPoIndexu(kolekcijaStudenata, aBrIndexa);

			if(indexCheck == 0){

				Student aStudent(
						aJmbg,
						aFirstName,
						aLastName,
						aBrIndexa,
						aSmijer
						);

				kolekcijaStudenata.push_back(aStudent);
			}
		  }
		}
		myfile.close();
	}
	else std::cout << "Unable to open file";

	return kolekcijaStudenata;
}

std::vector<Usmjerenje> readUsmjerenjeFile(){

	std::vector<Usmjerenje> kolekcijaUsmjerenja;
	std::string line;

	std::string aShortName;
	std::string aFullName;
	std::string aSPNaziv;

	std::ifstream myfile ("datoteke/usmjerenje.dat");
	if (myfile.is_open())
	{

		while(getline(myfile, line)) {

		  std::istringstream tokenizer(line);

		  if(tokenizer) {
			getline (tokenizer,aShortName,'#');
			getline (tokenizer,aFullName,'#');
			getline (tokenizer,aSPNaziv,'\n');

			int indexCheck = nadjiUsmjerenjePoKratici(kolekcijaUsmjerenja, aShortName);

			if(indexCheck == 0){

				Usmjerenje aUsmjerenje(
						aShortName,
						aFullName,
						aSPNaziv
						);

				kolekcijaUsmjerenja.push_back(aUsmjerenje);
			}
		  }
		}
		myfile.close();
	}
	else std::cout << "Unable to open file";

	return kolekcijaUsmjerenja;
}

std::vector<Ispit> readIspitFile(){

	std::vector<Ispit> kolekcijaIspita;
	std::string line;

	std::string aSubjectShort;
	std::string aJmbg;
	std::string aIndexNr;
	std::string aDate;
	std::string aGrade;

	std::ifstream myfile ("datoteke/ispit.dat");
	if (myfile.is_open())
	{

		while(getline(myfile, line)) {

		  std::istringstream tokenizer(line);

		  if(tokenizer) {
			getline (tokenizer,aSubjectShort,'#');
			getline (tokenizer,aJmbg,'#');
			getline (tokenizer,aIndexNr,'#');
			getline (tokenizer,aDate,'#');
			getline (tokenizer,aGrade,'\n');

			int daLiIspitPostojiVec = nadjiIspitPoDatumuStudentuPredmetu(
					kolekcijaIspita,
					aDate,
					aIndexNr,
					aSubjectShort);

			if(daLiIspitPostojiVec == 0){

				Ispit aIspit(
						aSubjectShort,
						aJmbg,
						aIndexNr,
						aDate,
						aGrade
						);

				kolekcijaIspita.push_back(aIspit);
			}
		  }
		}
		myfile.close();
	}
	else std::cout << "Unable to open file";

	return kolekcijaIspita;
}
