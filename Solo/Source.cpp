#include<iostream>
#include"Jatekos.h"
#include<string>
using namespace std;

int main()
{
	FeluletKezelo felulet(1);
	Asztal asztal;
	int JatekosSzam=0;
	cout << "Hanyan fognak jatszani?";
	cin >> JatekosSzam;
	string nevek[4] = {"","","",""};
	for (int i = 0; i < JatekosSzam; i++)
	{
		cin >> nevek[i];
	}
	Jatekos jat1(nevek[0]);
	Jatekos jat2(nevek[1]);
	Jatekos jat3(nevek[2]);
	Jatekos jat4(nevek[3]);
	for (int i = 0; i < 7; i++)
	{
		if (nevek[0] != "")jat1.Kap(asztal.Huz());
		if (nevek[1] != "")jat2.Kap(asztal.Huz());
		if (nevek[2] != "")jat3.Kap(asztal.Huz());
		if (nevek[3] != "")jat4.Kap(asztal.Huz());
	}
	bool huz = false;
	bool kimarad = false;
	Kartya::Szin szin = Kartya::Szin(1);
	while (jat1.van() || nevek[0] == "" && jat2.van() || nevek[1] == "" && jat3.van() || nevek[2] == "" && jat4.van() || nevek[3] == "")
	{
		if (nevek[0] != "")jat1.Jatszik(asztal, huz, kimarad, szin, felulet);
		if (nevek[1] != "")jat2.Jatszik(asztal, huz, kimarad, szin, felulet);
		if (nevek[2] != "")jat3.Jatszik(asztal, huz, kimarad, szin, felulet);
		if (nevek[3] != "")jat4.Jatszik(asztal, huz, kimarad, szin, felulet);
	}
	if (jat1.van() == false)cout << "1.nyert";
	else if (jat2.van() == false)cout << "2.nyert";
	else if (jat3.van() == false)cout << "3.nyert";
	else cout << "4.nyert";
	return 0;
}