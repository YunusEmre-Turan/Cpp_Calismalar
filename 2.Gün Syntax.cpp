#include<iostream>
#include<cmath> // vs code gerek yok zaten g�m�l�
using namespace std; // �st k�s�mda olmas� zorunlu


/////FONKS�YONU MA�N FONKS�YONUNUN DI�INDA TANIMLAMAK GEREK�YOR (hata verir)

/*
int alanHesapla(int x, int y) {

	return x * y;
}
*/

// void 
//de�er d�nmeyece�i zaman (return yokken yap�l�r)
/*
void ekranaMesajYaz() {
	cout << "Merhaba C++ " << endl;
	cout << "Merhaba C++ " << endl;
	cout << "Merhaba C++ " << endl;
	cout << "Merhaba C++ " << endl;
	cout << "Merhaba C++ " << endl;
}
*/
	// static kullan�l�nca g��ncellenmi� de�eri yeeni de�eri olmu� olur
		// 1. �a��rmada  sonucunu 5, 2. �a��r�mda sonucu 10 ,3. �a��r�mda 15 de�erini verir

/*void fonksiyon() {
	static int sayac = 0;
	sayac+5;
	cout << endl;
}
	*/
/*
int pointer1(int a) {
	a = 50;
	return a;
}

void pointer2(int* a) {
	*a = 34;
}
*/

//referans
void fonks1(int &x_) {
	x_ = x_ * 2;
	cout << "fonks1 icindeki x : " << x_ << endl;
}

int main() {

	

	// 1
	//cout << "Hello C++\n" ;
	//int yas = 20;
	//string isim = "Yunus Emre Turan";
	//cout << "Merhaba" << endl << isim << endl;
	//cout << "��renci Yasi" << yas;
	// ders2
	/* char notOrtalamasi = 'A';
	float sayisalNotortalamasi = 3.25;
	bool sinavGirdiMi =false;
	double pi = 3.1256465;

	cout << "��renci Not Ortalama :" << notOrtalamasi << endl;
	cout << "Ogrencisi sinav girdi mi :" << sinavGirdiMi << endl;
	cout << "Pi sayisi :" << pi << endl;
	cout << pi+sayisalNotortalamasi;
	cout << endl;

	// kullan�c�dan almak
	int en, boy, alan;
	cout << "en ve boyunu s�rayla giriniz" << endl;
	cin >> en >> boy;
	alan = en * boy;

	cout << "Dikd�rtgen alan�=	" << alan << "metrekare";
	*/
	// ceil tavana yuvarlar ==>  z=ceil(2.1);   sonu�=3
	//floor tabana yuvarlar ==>  z=floor(2.9);  sonu�=2
	// x�ss� y   ==>    z=pov(x,y);             sonu�=x^y
	//round en yak�n say�ya yuvarlar z=round(2.7)  sonu�=3

	// int y = 2;
	// y = round(2.5);
	// ders 9
	/*
	int sayi1;
	int sayi2;
	cout << "1. sayi giriniz =";
	cin >> sayi1;
	cout << "2. sayiyi giriniz";
	cin >> sayi2;
	*/
	//while d�ng�s�
	/*
	
	int index = 0;
	while (index <= 4) {
		cout << index << endl;
		index = index + 1;
	}
	*/
				//do while
	/*string sifre = "1234";
	string girilenDeger;
	do {
		cout << "Lutfen sifre giriniz :";
		cin >> girilenDeger;
	} while (sifre != girilenDeger);
		
	cout << "Ho� geldin";
	cout << (sifre != girilenDeger);
	cout << endl;
	*/
	/*int i;
	for (i = 1; i <= 20; i++) {
		if (i==10)
		continue;   // 10 u yazmaz son kald��� yeregider tekrar foru ba�lat�r 
					// if ten sonraki de�eri �al��t�rmaz

			cout << i << endl;
		cout << endl;
	}
	*/
	/*
	int sayi;
	cout << "Sayi gir" << endl;
	cin >> sayi;
	switch (sayi)
	{
	case 1:
		cout << "seciminiz 1" << endl;
		break;
	case 2:
		cout << "seciminiz 2" << endl;
		break;
	case 3:
		cout << "seciminiz " << endl;
		break;
	case 4:
		cout << "seciminiz 1" << endl;
		break;
	case 5:
		cout << "seciminiz 1" << endl;
		break;

	default:
		cout << "1 ile be� aras�ndaki bir sayiyi girmediniz";
		break;
	}
	*/
		// �oklu diziler
/*
	int dizi[2][3] = { {21,34,42},
				{22,35,47} };
	int i;
	int  j;
	for ( i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			cout << dizi[i][j] << " ";
		{
			cout << endl;
		}
		cout << endl;
		

	}
	*/
		// return ve fonks
		// metodu main d���nda tan�mlamak gerekli

	/*
	int sonuc=0;
	sonuc = alanHesapla(1, 2);
	cout << "Dikd�rtgen Alan� :" << sonuc;
*/

	//fonks yazma
	//  ekranaMesajYaz();

//const int x=6;  hi�bir yerde de�i�mez sadece x,6ya e�it olur


//static
/*
fonksion(); //birinci �a��rma
fonksion(); //2. �a��rma
fonksion(); //3. �a��rma
*/

		// pointer
/*
	int x=7;
	int *ptr;
	ptr= &x; // x adres & i�aretinden sonra yaz�l�r
	int i = 7;          // bir i de�i�keni tan�mland�
int* ptr;
ptr = &i;      //i de�i�keninin bellekteki adresi ptr pointer'�na de�er olarak atand�
cout << "i degiskeninin adresi : " << ptr << endl;
	
	void ucagin YonBilgilerinHesapla2(int* p) {
	//Yogun hesaplamalar� *p kullanarak yap  (az i�lemlerde fark�ok olmayaz)
		// ��NK� do�rudan adresinde kendisine ula��p i�lemi yap�yor 
			//Bu sayede daha az i�lem yap�yor
	*p= 34;
	}

*/ /*
int i = 7;
cout << "i'nin de�eri ; " << i << endl;
int k = pointer1(i);
cout << "i'nin de�i�ken �zerinden atanan yeni de�eri ; " << k << endl;
int* ptr2;
int z = 50;
cout << "z 'nin de�eri ; " << z << endl;
ptr2 = &z;
pointer2(ptr2);
cout << "z 'nin bellek adresi �zerinden yeni de�eri ; " << z << endl;
*/ /*
int arr[] = { 34,47,85 };

int* p;
p = arr;

cout << p << endl;
cout << arr << endl;

cout << endl << *(p + 2) << endl;  //p+2 3 diziye eri�im i�in(85)
cout << p[2];
*/
	//referans

int x = 5;
fonks1(x);
cout << "main icindekiler x : " << x;

return 0; }