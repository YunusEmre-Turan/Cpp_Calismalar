#include<iostream>
#include<cmath> // vs code gerek yok zaten gömülü
using namespace std; // üst kýsýmda olmasý zorunlu
// overlodeing (ayný isimli farklý parametreli fonks)

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
	// konsolda türkçe karakter çalýmasý için
	// setlocale(LC_ALL, "Turkish");
	/*
	ekranHataMesajiVer();
	ekranHataMesajiVer("ozel msj");
	ekranHataMesajiVer(404);

	cout << endl;
	*/

	// dinamk bellek yönetimi (poiter)
	// anlýk bellek oluþturma

	/*
	int* p = new int;
	*p = 7;

	cout << p << endl; // delete adresteki deðeri siliyor
	delete p;

	 /hata verdiri bu kullaným
	(//cout << p;       
	//cout << *p << endl;)

	cout << endl;
	*/
	//dinamic devam Array kulaným
	// aþaðýdaki kooda boyutu bilinmeyen dizinin boyut bilgisini alýp 
	// boyutuna göre deðerleri atanmýþtýr
	
	
	/*
	cout << "arrayin kaç tam sayi icereceini giriniz"; 
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

	// while koþul saðlanana kadar devam eder
	
	while (a != 0) {
		cout << "silmek için sifira basiniz ";
		cin >> a;

	}
		
	delete[] p;
	*/
	

	cout << endl;

	return 0;
}