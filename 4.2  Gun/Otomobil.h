#pragma once
#include<iostream>
using namespace std;



class Otomobil
{


public:

	string model;
	double fiyat;

	Otomobil();
	Otomobil(string _model, double _fiyat);

	void bilgi();

	void setKoltukSayisi(int _koltukSayisi);
	int getKoltukSayisi();

	void setGucu(double _gucu);
	double getGucu();

private:
	int koltukSayisi;
	double gucu;



};
 

