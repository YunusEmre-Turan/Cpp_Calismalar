#pragma once

#include<iostream>
using namespace std; 

#include"Kalitim.h"

class Kedi : public Hayvan {

public:

	

	string isim;
	// Kedi Fonks. undaki hayvan ismini hayvan ismine eþitledi
	Kedi(string _isim) : Hayvan(_isim) {
		// ek yapilabilecek islemmler de buraya yazilir

	}
	void fareYakala() {
		cout << Hayvan::getIsim() << "fare !  Yakal	" << endl;
	}

};