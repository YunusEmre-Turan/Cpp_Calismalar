#include<iostream>
#include<cmath> // vs code gerek yok zaten gömülü
using namespace std;
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




	return 0;
}