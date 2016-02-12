#pragma once
class Kartya
{
public:
	enum Szin {
		piros, zold, kek, sarga
	};
	enum Szam {
		egy=1,ketto,harom,negy,ot,hat,het,nyolc,kilenc,huzzkettot,kimarad,szinvalto
	};
private:
	Szin szin;
	Szam szam;
public:
	Kartya(Szin szin,Szam szam);
	Szin getSzin();
	Szam getSzam();
	~Kartya();
};

