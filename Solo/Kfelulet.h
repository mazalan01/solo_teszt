#pragma once
#include<iostream>
#include<vector>
#include"Kartya.h"
class Kfelulet
{
public:
	Kfelulet();
	void torol();
	void lapok(std::vector<Kartya> kartyak, Kartya kartya);
	void kiir(std::string szoveg);
	int valaszt(bool &huzlent);
	Kartya::Szin szinvalaszt();
	~Kfelulet();
};

