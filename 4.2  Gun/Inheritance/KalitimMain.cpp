#include<iostream>

#include "Kalitim.h"
#include"Kedi.h"
#include"Kopek.h"

using namespace std;






int main() {
	

	Kedi tekir("Tekir ");
	tekir.uyu();
	tekir.beslen();
	tekir.fareYakala();


	cout << endl << endl << "-------------------" << endl<<"         6. gun " << endl<<endl;

	Kopek kopek("Karabasan");
	kopek.beslen();
	kopek.uyu();

	Kopek* kp = new Kopek("it");
	//
	cout << "kopek sayisi = " << Kopek::getKopekSayisi() << endl;
		delete kp;

	cout << "kopek sayisi = " << Kopek::getKopekSayisi()<< endl;




	return 0;
}