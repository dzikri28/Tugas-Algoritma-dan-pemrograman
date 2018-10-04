#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
	
	//deklarasi variabel
	double TB, BB;
	cout<<"masukan data tinggi badan : "; cin>>TB;
	
	//proses perhitungan
	BB = TB - 100 - (0.1 * (TB - 100));
	
	//menampilkan hasil perhitungan
	cout<<BB<<" BB ";
	
	return 0;
}
