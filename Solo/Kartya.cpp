#include "Kartya.h"



Kartya::Kartya(Szin szin,Szam szam):szin(szin),szam(szam)
{
}

Kartya::Szin Kartya::getSzin()
{
	return szin;
}

Kartya::Szam Kartya::getSzam()
{
	return szam;
}

Kartya::~Kartya()
{
}
