#include<iostream>
#include"Kopek.h"
#include "Kalitim.h"

int Kopek::kopekSayisi = 0;

//Constructor
Kopek::Kopek(string _isim) :Hayvan(_isim) {
	// Ek yapilacak islemler
	kopekSayisi++;

}
Kopek::~Kopek(){
	kopekSayisi--;
}

void Kopek::havla() {
	cout <<Hayvan::getIsim() << "havliyor ! " << endl;
}