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


	// pointer nesneye iþaret ediyorsa -> ile çaðrýlýr
	Otomobil* p;

	p = &Otomobilx;
	p -> bilgi();

	

	Otomobil* p1 = new Otomobil("beyaz", 125); // yeni bir otomobil nesnesi oluþturuyor
	p1->setKoltukSayisi(35);
	p1->bilgi();

	delete p1; // ram den silmek için
	cout << endl<<endl;

	// destructors 
	// hafizadaki iþlemleri geri býrakmak için kullanýlýr
	// bir de silerken 




return 0;
}