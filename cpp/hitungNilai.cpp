#include <iostream>
#include<conio.h>
/*cari huruf jika 
Nilai < 35 huruf E
Nilai < 50 huruf D
Nilai < 70 huruf C
Nilai < 85 huruf B
else A

Jika salah satu bernilai 0 maka huruf E
*/

using namespace std;

int main() {
	int nilai_akhir;
	int a,t,uts,uas;
	float ta = 0.14;
	int b;
	char huruf;
	cout<<"---------------------------------------------\n\tALAT HITUNG NILAI AKHIR\n---------------------------------------------\n";
	begin:
	cout<<"Masukan Nilai Absen\t: ";
	cin>>a;
	cout<<"Masukan Nilai Tugas\t: ";
	cin>>t;
	cout<<"Masukan Nilai UTS\t: ";
	cin>>uts;
	cout<<"Masukan Nilai UAS\t: ";
	cin>>uas;
	b = a/ta;
	nilai_akhir = (b*10/100)+(t*20/100)+(uts*30/100)+(uas*40/100);
	
	if (a == 0 | t == 0 | uts == 0 | uas == 0){
		huruf = 'E';
		nilai_akhir=0;
	}else if (nilai_akhir < 35){
		huruf = 'E';
	}else if (nilai_akhir < 50){
		huruf = 'D';
	}else if (nilai_akhir < 70){
		huruf = 'C';
	}else if (nilai_akhir < 85){
		huruf = 'B';
	}else{
		huruf = 'A';
	}
	cout<<"\nNilai Akhir adalah\t: "<<nilai_akhir<<endl;
	cout <<"Huruf\t\t\t: " <<huruf<<endl;
	cout<<"---------------------------------------------"<<endl;
	goto begin;
	return 0;
}
