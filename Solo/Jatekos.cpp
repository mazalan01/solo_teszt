#include "Jatekos.h"


Jatekos::Jatekos(std::string nev):Nev(nev)
{
}

void Jatekos::Kap(Kartya kartya)
{
	kartyak.push_back(kartya);
}

bool Jatekos::van()
{
	if (kartyak.size() == 0)return false;
	else return true;
}

int Jatekos::keres(Kartya::Szin szin, Kartya::Szam szam)
{
	int i = 0;
	while (i < kartyak.size() && (szin != kartyak[i].getSzin() || szam != kartyak[i].getSzam()))i++;
	if (i != kartyak.size())
	{
		return i;
	}
}

void Jatekos::Jatszik(Asztal &asztal,bool &huz,bool &kimarad,Kartya::Szin &valasztott,FeluletKezelo felulet)
{
	Kartya::Szin valasztottszin;
	if (asztal.Legfelso().getSzam() == 12)valasztottszin = valasztott;
	else valasztottszin = asztal.Legfelso().getSzin();
	felulet.torol();
	felulet.lapok(kartyak,asztal.Legfelso());
	if (huz)
	{
		felulet.kiir("Huznod kellett ket lapot");
		Kap(asztal.Huz());
		Kap(asztal.Huz());
		felulet.lapok(kartyak, asztal.Legfelso());
		huz = false;
	}
	else if(kimarad)
	{
		felulet.kiir("Ebbol a korbol kimaradtal");
		kimarad = false;
	}
	else
	{
		bool huzlent = false;
		Kartya::Szin szin;
		Kartya::Szam szam;
		do
		{
			felulet.kiir("Milyen lapot szeretnel lerakni?");
			Kartya valasztas = felulet.valaszt(huzlent,kartyak);
			szin = valasztas.getSzin();
			szam = valasztas.getSzam();
			if (huzlent)
			{
				Kap(asztal.Huz());
				felulet.lapok(kartyak, asztal.Legfelso());
			}
		} while (false==(huzlent || szin==valasztottszin || szam==asztal.Legfelso().getSzam()));
		if (false == huzlent)
		{
			if (szam == 11)kimarad = true;
			else if (szam == 10)huz = true;
			else if (szam == 12)
			{
				Kartya valasztas= felulet.valaszt(huzlent,kartyak);
				felulet.kiir("Milyen szint szeretnel?");
				valasztottszin = felulet.szinvalaszt();
			}
			asztal.Dob(kartyak[keres(szin, szam)]);
			kartyak.erase(kartyak.begin() + keres(szin, szam));
			felulet.lapok(kartyak, asztal.Legfelso());
		}
	}

}

Jatekos::~Jatekos()
{
}
