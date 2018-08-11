#include <iostream>
#include<string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int jenis_kelamin, tinggi_badan;
	string nama;
	cout<<"Masukan Nama :";cin>>nama;
	cout<<"Jenis Kelamin[ 1. Laki-laki/ 2. Perempuan ] : ";cin>>jenis_kelamin;
	switch (jenis_kelamin){
		case 1:
			cout<<"Tinggi Badan : ";cin>>tinggi_badan;
			cout<<endl;
			if (tinggi_badan > 170){
				cout<<"Nama Anda "<<nama<<endl;
				cout<<"jenis Kelamin Laki-laki"<<endl;
				cout<<"Tinggi Badan "<<tinggi_badan<<" cm"<<endl;
			}else{
				cout<<"Data tidak dapat di tampilkan !"<<endl;
			}
			break;
		case 2:
			cout<<"Tinggi Badan : ";cin>>tinggi_badan;
			cout<<endl;
			if (tinggi_badan > 155){
				cout<<"Nama Anda "<<nama<<endl;
				cout<<"jenis Kelamin Perempuan"<<endl;
				cout<<"Tinggi Badan "<<tinggi_badan<<" cm"<<endl;
			}else{
				cout<<"Data tidak dapat di tampilkan !"<<endl;
			}
			break;
		default:
			cout<<"input salah";
			break;
	}
	return 0;
}
