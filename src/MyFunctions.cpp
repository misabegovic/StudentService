/*
 * MyFunctions.cpp
 *
 *  Created on: Nov 27, 2017
 *      Author: muhamed
 */

#include <iterator>
#include <sstream>
#include <iostream>
#include <fstream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include "Nastavnik.h"
#include "StudijskiProgram.h"

void ispisiListuNastavnika(std::vector<Nastavnik> listaNastavnika){


  std::vector<Nastavnik>::iterator it;

  for(it = listaNastavnika.begin(); it != listaNastavnika.end(); ++it){
	  std::cout << (*it).getJmbg() << std::endl;

	  std::cout << "Ime i prezime: " << (*it).getFirstName() << " ";
	  std::cout << (*it).getLastName() << '\n';
	  std::cout << "Pozicija: " << (*it).getPosition() << '\n';
	  std::cout << "Predmet: " << (*it).getSubject() << "\n\n";
  }

}

void ispisiListuStudijskihPrograma(std::vector<StudijskiProgram> listaStudijskihPrograma){


  std::vector<StudijskiProgram>::iterator it;

  for(it = listaStudijskihPrograma.begin(); it != listaStudijskihPrograma.end(); ++it){
	  std::cout << "Kratica: " << (*it).getShortTitle() << '\n';
	  std::cout << "Puni naziv usmjerenja: " << (*it).getFullTitle() << "\n\n";
  }

}

void updateNastavnikFile(std::map<std::string, Nastavnik> listaNastavnika)
{

  std::ofstream myfile;
  myfile.open ("datoteke/nastavnik.dat");

  std::map<std::string, Nastavnik>::iterator it;
  it = listaNastavnika.begin();

  while(it != listaNastavnika.end()){
	  std::string key = (*it).first;

	  myfile << listaNastavnika[key].getJmbg() << "#";
	  myfile << listaNastavnika[key].getFirstName() << "#";
	  myfile << listaNastavnika[key].getLastName() << "#";
	  myfile << listaNastavnika[key].getPosition() << "#";
	  myfile << listaNastavnika[key].getSubject() << '\n';

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

