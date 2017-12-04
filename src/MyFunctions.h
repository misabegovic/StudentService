/*
 * MyFunctions.h
 *
 *  Created on: Nov 27, 2017
 *      Author: muhamed
 */

#ifndef MYFUNCTIONS_H_
#define MYFUNCTIONS_H_

#include <iterator>
#include <iostream>
#include <sstream>
#include <fstream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include "Nastavnik.h"
#include "StudijskiProgram.h"

template<class A>
void ispisiListu(std::vector<A> aList)
{
  typename std::vector<A>::iterator it;

  for(it = aList.begin(); it != aList.end(); ++it){
	  (*it).ispisiPodatke();
  }
}

std::vector<Nastavnik> readNastavnikFile();
std::vector<StudijskiProgram> readSPFile();

//void updateNastavnikFile(std::map<std::string, Nastavnik>);


#endif /* MYFUNCTIONS_H_ */
