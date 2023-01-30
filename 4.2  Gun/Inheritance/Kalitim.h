#pragma once

#include<iostream>
using namespace std;



class Hayvan {

public:

	Hayvan(string _isim) {
		isim = _isim;
	}
	void beslen() {
		cout << isim << "besleniyor..." << endl;
	}
	void uyu() {
		cout << isim << "uyuyor..." << endl;
	}

	void setIsim(string _isim) {
		isim = _isim;
	}

	string getIsim() {
		return isim;
	}
	// protected yaparsak private yerine sadece alt sýnýflarý kullananlar görür 
private:
	string isim;

}; 
