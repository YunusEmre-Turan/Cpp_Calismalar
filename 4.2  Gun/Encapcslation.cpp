#include<iostream>
#include "Otomobil.h"

using namespace std;

int main(){

	Otomobil Otomobilx("3131", 310);
	Otomobilx.bilgi();
	
	Otomobilx.setKoltukSayisi(10);
	cout <<endl<< "koltuk sayisi : " << Otomobilx.getKoltukSayisi() << endl<<endl;

	Otomobilx.setGucu(138.5);
	cout << "motor gucu : " << Otomobilx.getGucu() << endl;

	cout << endl << "---------------------------" << endl;

	cout << endl << "5. gun devami " << endl;


	// pointer nesneye i�aret ediyorsa -> ile �a�r�l�r
	Otomobil* p;

	p = &Otomobilx;
	p -> bilgi();

	

	Otomobil* p1 = new Otomobil("beyaz", 125); // yeni bir otomobil nesnesi olu�turuyor
	p1->setKoltukSayisi(35);
	p1->bilgi();

	delete p1; // ram den silmek i�in
	cout << endl<<endl;

	// destructors 
	// hafizadaki i�lemleri geri b�rakmak i�in kullan�l�r
	// bir de silerken 




return 0;
}