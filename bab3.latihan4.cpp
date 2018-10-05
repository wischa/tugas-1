#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main ()
{
	char huruf;
	
	cout<<"Masukan huruf kecil :";
	cin>>huruf;
	cout<<endl;
	
	//seleksi pembanding OR, salah satu kondisi bernilai benar
	if ( (huruf == 'a')|| (huruf == 'i') || (huruf == 'u') || (huruf == 'e') || (huruf == 'o') ) {
		cout<<"Anda memasukan huruf vokal";
	} else {
		cout<<"Yang anda masukan adalah huruf konsonan";
	}
}
