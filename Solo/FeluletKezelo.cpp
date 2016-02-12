#include "FeluletKezelo.h"



FeluletKezelo::FeluletKezelo(int felulet):felulet(felulet)
{
}

void FeluletKezelo::torol()
{
	if (felulet == 1)fel1.torol();
}

void FeluletKezelo::lapok(std::vector<Kartya> kartyak, Kartya kartya)
{
	if (felulet == 1)fel1.lapok(kartyak, kartya);
}

void FeluletKezelo::kiir(std::string szoveg)
{
	if (felulet == 1)fel1.kiir(szoveg);
}

Kartya FeluletKezelo::valaszt(bool &huzlent, std::vector<Kartya>kartyak)
{
	if (felulet == 1)
	{
		int n;
		do
		{
			huzlent = false;
			n = fel1.valaszt(huzlent);
		} while (n<=0 || n>=kartyak.size() );
		return kartyak[n-1];
	}
}

Kartya::Szin FeluletKezelo::szinvalaszt()
{
	if (felulet == 1)return fel1.szinvalaszt();
}

FeluletKezelo::~FeluletKezelo()
{
}
