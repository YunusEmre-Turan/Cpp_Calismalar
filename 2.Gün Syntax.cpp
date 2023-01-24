#include<iostream>
#include<cmath> // vs code gerek yok zaten gömülü
using namespace std; // üst kýsýmda olmasý zorunlu


/////FONKSÝYONU MAÝN FONKSÝYONUNUN DIÞINDA TANIMLAMAK GEREKÝYOR (hata verir)

/*
int alanHesapla(int x, int y) {

	return x * y;
}
*/

// void 
//deðer dönmeyeceði zaman (return yokken yapýlýr)
/*
void ekranaMesajYaz() {
	cout << "Merhaba C++ " << endl;
	cout << "Merhaba C++ " << endl;
	cout << "Merhaba C++ " << endl;
	cout << "Merhaba C++ " << endl;
	cout << "Merhaba C++ " << endl;
}
*/
	// static kullanýlýnca güüncellenmiþ deðeri yeeni deðeri olmuþ olur
		// 1. çaðýrmada  sonucunu 5, 2. çaðýrýmda sonucu 10 ,3. çaðýrýmda 15 deðerini verir

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
	//cout << "Öðrenci Yasi" << yas;
	// ders2
	/* char notOrtalamasi = 'A';
	float sayisalNotortalamasi = 3.25;
	bool sinavGirdiMi =false;
	double pi = 3.1256465;

	cout << "Öðrenci Not Ortalama :" << notOrtalamasi << endl;
	cout << "Ogrencisi sinav girdi mi :" << sinavGirdiMi << endl;
	cout << "Pi sayisi :" << pi << endl;
	cout << pi+sayisalNotortalamasi;
	cout << endl;

	// kullanýcýdan almak
	int en, boy, alan;
	cout << "en ve boyunu sýrayla giriniz" << endl;
	cin >> en >> boy;
	alan = en * boy;

	cout << "Dikdörtgen alaný=	" << alan << "metrekare";
	*/
	// ceil tavana yuvarlar ==>  z=ceil(2.1);   sonuç=3
	//floor tabana yuvarlar ==>  z=floor(2.9);  sonuç=2
	// xüssü y   ==>    z=pov(x,y);             sonuç=x^y
	//round en yakýn sayýya yuvarlar z=round(2.7)  sonuç=3

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
	//while döngüsü
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
		
	cout << "Hoþ geldin";
	cout << (sifre != girilenDeger);
	cout << endl;
	*/
	/*int i;
	for (i = 1; i <= 20; i++) {
		if (i==10)
		continue;   // 10 u yazmaz son kaldýðý yeregider tekrar foru baþlatýr 
					// if ten sonraki deðeri çalýþtýrmaz

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
		cout << "1 ile beþ arasýndaki bir sayiyi girmediniz";
		break;
	}
	*/
		// çoklu diziler
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
		// metodu main dýþýnda tanýmlamak gerekli

	/*
	int sonuc=0;
	sonuc = alanHesapla(1, 2);
	cout << "Dikdörtgen Alaný :" << sonuc;
*/

	//fonks yazma
	//  ekranaMesajYaz();

//const int x=6;  hiçbir yerde deðiþmez sadece x,6ya eþit olur


//static
/*
fonksion(); //birinci çaðýrma
fonksion(); //2. çaðýrma
fonksion(); //3. çaðýrma
*/

		// pointer
/*
	int x=7;
	int *ptr;
	ptr= &x; // x adres & iþaretinden sonra yazýlýr
	int i = 7;          // bir i deðiþkeni tanýmlandý
int* ptr;
ptr = &i;      //i deðiþkeninin bellekteki adresi ptr pointer'ýna deðer olarak atandý
cout << "i degiskeninin adresi : " << ptr << endl;
	
	void ucagin YonBilgilerinHesapla2(int* p) {
	//Yogun hesaplamalarý *p kullanarak yap  (az iþlemlerde farkçok olmayaz)
		// ÇÜNKÜ doðrudan adresinde kendisine ulaþýp iþlemi yapýyor 
			//Bu sayede daha az iþlem yapýyor
	*p= 34;
	}

*/ /*
int i = 7;
cout << "i'nin deðeri ; " << i << endl;
int k = pointer1(i);
cout << "i'nin deðiþken üzerinden atanan yeni deðeri ; " << k << endl;
int* ptr2;
int z = 50;
cout << "z 'nin deðeri ; " << z << endl;
ptr2 = &z;
pointer2(ptr2);
cout << "z 'nin bellek adresi üzerinden yeni deðeri ; " << z << endl;
*/ /*
int arr[] = { 34,47,85 };

int* p;
p = arr;

cout << p << endl;
cout << arr << endl;

cout << endl << *(p + 2) << endl;  //p+2 3 diziye eriþim için(85)
cout << p[2];
*/
	//referans

int x = 5;
fonks1(x);
cout << "main icindekiler x : " << x;

return 0; }