#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int nilai;
	cout<<"Masukkan Nilai : "; cin>>nilai;
	cout<<endl;
	if (nilai>50)
	{
		cout<<"Selamat, Anda Lulus...";
	}else
	{
		cout<<"Maaf, Anda Gagal...";
	}
	return 0;
}
