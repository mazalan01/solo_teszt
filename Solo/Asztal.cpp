#include "Asztal.h"
#include<vector>
void Asztal::Kever()
{
	Kartya felso = dobo.back();
	for (int i = 0; i < dobo.size()-1; i++)
	{
		huzo.push_back(dobo[i]);
	}
	dobo.clear();
	dobo.push_back(felso);
}

void Asztal::Dob(Kartya kartya)
{
	dobo.push_back(kartya);
}

Kartya Asztal::Legfelso()
{
	return dobo.back();
}

Kartya Asztal::Huz()
{
	if (huzo.size() == 0)Kever();
	Kartya felso = huzo.back();
	huzo.erase(huzo.begin() + huzo.size() - 1);
	return felso;
}

Asztal::Asztal()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 12;j++)
		{
			Kartya kar((Kartya::Szin)i, (Kartya::Szam)(j+1));
			dobo.push_back(kar);
		}
	}
	Kever();
}



Asztal::~Asztal()
{
}
