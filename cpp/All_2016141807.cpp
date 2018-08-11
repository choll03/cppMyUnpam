#include <iostream>
using namespace std;
int main() {
	cout<<"Nama\t: ISMAIL"<<endl;
	cout<<"Kelas\t: 02TPLE021"<<endl;
	cout<<"NIM\t: 2016141807"<<endl;
	
	int nim[]={2,0,1,6,1,4,1,8,0,7};

//-----------------------------------nomor 1---------------------------------------------------------------

	cout<<endl;
	cout<<"1. Tampilkan array yang isinya adalah nim saya."<<endl;
	cout<<"Jawab : ";
		for(int x=0;x<10;x++){
		cout<<nim[x];
	}
	
//-----------------------------------nomor 2---------------------------------------------------------------
	int max=0;
	int min=nim[0];
	cout<<endl<<endl;
	cout<<"2. Tampilakan nilai max dan min dari array nomor 1"<<endl;
	cout<<"Jawab : ";
	for(int x=0;x<10;x++){
		if(nim[x]>max){
			max=nim[x];
		}
		if(nim[x]<min){
			min=nim[x];
		}
	}
	cout<<"Nilai Maksimum\t= "<<max<<"\n\tNilai Minimum\t= "<<min<<endl<<endl;
	
//-----------------------------------nomor 3---------------------------------------------------------------
	int urutan;
	cout<<"3. Buat Pengurutan dari Array nomor 1"<<endl;
	cout<<"Jawab : ";
	for(int x=0;x<10;x++){
		urutan = nim[x];
		for(int y=0;y<10;y++){
			if(nim[x]<nim[y]){
				urutan = nim[y];
				nim[y] = nim[x];
				nim[x] = urutan;
			}
		}
	}
	for(int x=0;x<10;x++){
	cout<<nim[x];
	}
	
//-----------------------------------nomor 2---------------------------------------------------------------
	int jumlah=0;
	cout<<endl<<endl;
	cout<<"4. Jumlahkan seluruh array nomor 1"<<endl;
	cout<<"Jawab : ";
	for(int x=0;x<10;x++){
		jumlah = jumlah + nim[x];
	}
	cout<<jumlah<<endl;
	return 0;
}
