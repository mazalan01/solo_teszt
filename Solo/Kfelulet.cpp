#include "Kfelulet.h"



Kfelulet::Kfelulet()
{
}

void Kfelulet::torol()
{
	for (int i = 0; i < 15;i++)std::cout << std::endl;
}

void Kfelulet::lapok(std::vector<Kartya> kartyak, Kartya kartya)
{
	std::cout << "Legfelso lap:" << kartya.getSzin() << " " << kartya.getSzam()<<std::endl;
	for (int i = 0; i < kartyak.size(); i++)
	{
		std::cout << i + 1 << ". lapod:" << kartya.getSzin() << " " << kartya.getSzam() << std::endl;
	}
	std::cout << std::endl;
}

void Kfelulet::kiir(std::string szoveg)
{
	std::cout << szoveg.c_str() << std::endl;
}

int Kfelulet::valaszt(bool &huzlent)
{
	std::cout << "Huzol lapot?(i-igen,n-nem)";
	char c;
	std::cin >> c;
	if (c == 'i')
	{
		huzlent = true;
		return 0;
	}
	std::cout << "Hanyadik lap?";
	int n;
	std::cin >> n;
	return n;
}

Kartya::Szin Kfelulet::szinvalaszt()
{
	Kartya::Szin a;
	int n;
	do
	{
		std::cout << "Milyen szint valasztassz?(1-piros,2-zold,3-kek,4-sarga):";
		std::cin >> n;
	} while (n < 1 || n>4);
	a = Kartya::Szin(n);
	return a;
}

Kfelulet::~Kfelulet()
{
}
