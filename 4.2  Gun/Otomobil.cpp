#include "Otomobil.h"




	Otomobil::Otomobil(){}
	Otomobil::Otomobil(string _model, double _fiyat){
	
		model = _model;
		fiyat = _fiyat;
	
}
	void Otomobil::bilgi(){
		cout << "fiyat : " << fiyat << endl;
		cout << "model : " << model << endl;
	}
	// set de�er atamak i�in
	// get atad���n de�eri almak i�in 
	 
	void Otomobil::setKoltukSayisi(int _koltukSayisi) {
		koltukSayisi = _koltukSayisi;
	}
	int Otomobil::getKoltukSayisi() {
		return koltukSayisi;
	}


	void Otomobil::setGucu(double _gucu) {
		gucu = _gucu;
	}
	double Otomobil::getGucu() {
		return gucu;
	}


