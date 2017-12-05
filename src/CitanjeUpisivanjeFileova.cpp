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

			kolekcijaStudijskihPrograma.push_back(aStudijskiProgram);
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

			Predmet aPredmet(
					aSifraPredmeta,
					aNazivPredmeta,
					aStudijskiP1,
					aStudijskiP2,
					aUSemestru,
					aPredavanjaSati,
					aAuditorneVjezbeS,
					aLabVjezbeS,
					aNosiEcts,
					aTrajeSemestara
					);

			kolekcijaPredmeta.push_back(aPredmet);
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

			Usmjerenje aUsmjerenje(
					aShortName,
					aFullName,
					aSPNaziv
					);

			kolekcijaUsmjerenja.push_back(aUsmjerenje);
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
		myfile.close();
	}
	else std::cout << "Unable to open file";

	return kolekcijaIspita;
}
