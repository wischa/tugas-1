#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main ()
{
	cout<<"----- Berat Badan Ideal -----"<<endl;
	
	//masukan data
	cout<<endl;
	cout<<endl;
	
	//deklarasi variabel
	double tb, bb;
	cout<<"Tinggi Badan : "; cin>>tb;
	
	//menghitung Berat Badan Ideal;
	bb = tb - 100 - ((tb-100) * 0.1 ); cout<<endl;
	cout<<"Berat Badan Ideal : "<<bb; cout<<endl;
	
getch ();
return 0;	
}

