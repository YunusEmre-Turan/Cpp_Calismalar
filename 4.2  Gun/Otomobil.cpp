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
	// set deðer atamak için
	// get atadýðýn deðeri almak için 
	 
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


