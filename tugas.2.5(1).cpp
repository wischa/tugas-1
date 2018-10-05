#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//deklarasi variabel
	double meter, yard, kaki, inchi;
	
	//masukan data
	cout<<"konversi dari meter ke yard, kaki, dan inchi"<<endl;
	cout<<"Input Meter : ";
	cin>>meter;
	
	//menghitung konversi
		//konversi meter ke yard
			yard = meter / 0,9144;
		//konversi meter ke kaki
			kaki = meter / 0.3048;
		//konversi dari meter ke inchi
			inchi = meter / 0.0254;
			
		//menampilkan hasil
			cout<<meter<<" Meter = "<<yard<<"yard"<<endl;
			cout<<meter<<" Meter ="<<kaki<<"yard"<<endl;
			cout<<meter<<" Meter ="<<inchi<<"inchi"<<endl;
system("pause")	;		
return 0;
			
}                        
