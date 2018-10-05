#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
	//mendefinisikan struktur waktu
	struct {
		int jam, menit, detik;
	} Masuk, Keluar, Selisih;
	
	
int main()
{
	
	//masukan data
		cout<<"Menghitung selisih waktu"<<endl;
		
		//masukan data jam masuk
		cout<<"Masukan  waktu pertama"<<endl;
		cout<<"jam	 :"; cin>>Masuk.jam;
		cout<<"Menit :"; cin>>Masuk.menit;
		cout<<"Detik :"; cin>>Masuk.detik;
		
		
		//masukan data jam keluar
			cout<<"Masukan waktu ke dua" <<endl;
			cout<<"jam	 :"; cin>>Keluar.jam;
			cout<<"Menit :"; cin>>Keluar.menit;
			cout<<"Detik :"; cin>>Keluar.detik;
			
			//03:00:00
			//04:30:25
			
			//menghitung selisih detik
			if (Keluar.detik - Masuk.detik < 0) { Selisih.detik = (60 + Keluar.menit) - Masuk.menit;
			Keluar.menit;
			}
			else{
				Selisih.detik = Keluar.detik - Masuk.detik;
			}
			
			//menghitung selisih menit
			if((Keluar.menit - Masuk.menit) < 0 ) { Selisih.menit = (60 + Keluar.menit) - Masuk.menit;
			Keluar.menit;
			Selisih.jam = Keluar.jam - Masuk.jam-1;
			}
			else{
				Selisih.menit = Keluar.menit - Masuk.menit;
				Selisih.jam = Keluar.jam - Masuk.jam;
			}
			
			//menghitung selisih jam
			
			cout<<" selisih dalam detik = "<<Selisih.jam*3600 + Selisih.menit*60 + Selisih.detik <<endl;
			
			//masukan data jam keluar
			cout<<"Selisih----"<<endl;
			cout<<"jam 	 : "<<Selisih.jam<<endl;
			cout<<"Menit : "<<Selisih.menit<<endl;
			cout<<"Detik : "<<Selisih.detik<<endl;
			
			
getch ();
return 0;			
}

		
	
