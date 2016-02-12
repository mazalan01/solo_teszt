#pragma once
#include"Asztal.h"
#include"FeluletKezelo.h"
class Jatekos
{
private:
	std::vector<Kartya>kartyak;
	std::string Nev;
public:
	void Kap(Kartya kartya);
	void Jatszik(Asztal &asztal, bool &huz, bool &kimarad, Kartya::Szin &valasztott, FeluletKezelo felulet);
	int keres(Kartya::Szin szin, Kartya::Szam szam);
	bool van();
	Jatekos(std::string nev);
	~Jatekos();
};