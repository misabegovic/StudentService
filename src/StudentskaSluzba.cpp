//============================================================================
// Author      : Muhamed Isabegovic
//============================================================================

#include <iterator>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include "Nastavnik.h"
#include "MyFunctions.h"

int main ()
{
	std::cout << "Nastavnici: " << std::endl << std::endl;
	std::vector<Nastavnik> nastavnici;
	nastavnici = readNastavnikFile();
	ispisiListu(nastavnici);
	std::cout << std::endl;

	std::cout << "Studijski Programi: " << std::endl << std::endl;
	std::vector<StudijskiProgram> studijskiProgrami;
	studijskiProgrami = readSPFile();
	ispisiListu(studijskiProgrami);
	std::cout << std::endl;

	std::cout << "Predmeti: " << std::endl << std::endl;
	std::vector<Predmet> predmeti;
	predmeti = readPredmetFile();
	ispisiListu(predmeti);
	std::cout << std::endl;

  //updateNastavnikFile(nastavnici);

  return 0;
}
