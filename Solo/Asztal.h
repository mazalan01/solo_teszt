#pragma once
#include"Kartya.h"
#include<vector>
class Asztal
{
private:
	std::vector<Kartya>huzo,dobo;
public:
	Kartya Huz();
	void Dob(Kartya kartya);
	void Kever();
	Kartya Legfelso();
	Asztal();
	~Asztal();
};

