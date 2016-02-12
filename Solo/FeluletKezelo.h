#pragma once
#include"Kfelulet.h"
class FeluletKezelo
{
private:
	int felulet;
	Kfelulet fel1;
public:
	FeluletKezelo(int felulet);
	void torol();
	void lapok(std::vector<Kartya> kartyak, Kartya kartya);
	void kiir(std::string szoveg);
	Kartya valaszt(bool &huzlent, std::vector<Kartya>kartyak);
	Kartya::Szin szinvalaszt();
	~FeluletKezelo();
};

