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














return 0;
}