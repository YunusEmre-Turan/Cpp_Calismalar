#pragma once
#include"Kalitim.h"




class Kopek : public Hayvan {
public:
	Kopek(string _isim);
	~Kopek();
	void havla();
	static int getKopekSayisi() {
		return kopekSayisi;
	};

private:
	static int kopekSayisi ;

};
