#include<iostream>
#include<cstdlib>
using namespace std;

struct mahasiswa
{
	char nim[15];
	char nama[30];
	char alamat[50];
	float ipk;
};

int main()
{
	mahasiswa mhs;
	
	cout<<"NIM \t: "; cin.getline(mhs.nim,15);
	cout<<"Nama \t: "; cin.getline(mhs.nama,30);
	cout<<"Alamat \t: "; cin.getline(mhs.alamat,50);
	cout<<"IPK \t: "; cin>>mhs.ipk;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Nim anda \t:"<<mhs.nim<<endl;
	cout<<"Nama anda \t:"<<mhs.nama<<endl;
	cout<<"Alamat anda \t:"<<mhs.alamat<<endl;
	cout<<"IPK anda \t:"<<mhs.ipk<<endl;
	system("PAUSE");
	
	return 0;
}


