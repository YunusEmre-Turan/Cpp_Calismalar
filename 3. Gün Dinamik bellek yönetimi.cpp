#include<iostream>
#include<cmath> // vs code gerek yok zaten g�m�l�
using namespace std; // �st k�s�mda olmas� zorunlu
// overlodeing (ayn� isimli farkl� parametreli fonks)

/*
void ekranHataMesajiVer() {
	cout << "Dikkat : Hata olustu ! " << endl;
}

void ekranHataMesajiVer(string mesaj) {
	cout <<  mesaj << endl;
}
void ekranHataMesajiVer(int hataKodu) {
	cout << hataKodu << endl;
}*/


int main() {
	// konsolda t�rk�e karakter �al�mas� i�in
	// setlocale(LC_ALL, "Turkish");
	/*
	ekranHataMesajiVer();
	ekranHataMesajiVer("ozel msj");
	ekranHataMesajiVer(404);

	cout << endl;
	*/

	// dinamk bellek y�netimi (poiter)
	// anl�k bellek olu�turma

	/*
	int* p = new int;
	*p = 7;

	cout << p << endl; // delete adresteki de�eri siliyor
	delete p;

	 /hata verdiri bu kullan�m
	(//cout << p;       
	//cout << *p << endl;)

	cout << endl;
	*/
	//dinamic devam Array kulan�m
	// a�a��daki kooda boyutu bilinmeyen dizinin boyut bilgisini al�p 
	// boyutuna g�re de�erleri atanm��t�r
	
	
	/*
	cout << "arrayin ka� tam sayi icereceini giriniz"; 
	int x;
	
	cin >> x;
	int* p = new int[x];

	
	for (int i = 0; i < x; i++) {
		cout << i << " . degeri gir" << endl;
		cin >> p[i];
		
	}

	int sum = 0;
	for (int i = 0; i < x; i++) {
		sum = sum + p[i];
	}
	cout << "toplam: " << sum << endl;
	cout << "silmek icin sifira basiniz ";
	int a;

	cin >> a;

	// while ko�ul sa�lanana kadar devam eder
	
	while (a != 0) {
		cout << "silmek i�in sifira basiniz ";
		cin >> a;

	}
		
	delete[] p;
	*/
	

	cout << endl;

	return 0;
}