#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int angka;
	cout<<"Masukkan Angka : "; cin>>angka;
	cout<<endl;
	//seleksi pembanding AND, kedua kondisi harus bernilai benar
	if ((angka>0) && (angka<10)){
		cout<<"Anda memasukkan angka antara 1 sampai 9";
	}else
	{
		cout<<"Yang anda masukkan bukan antara 1 sampai 9";
	} 
	return 0;
}
