#include <iostream>
using namespace std;
int main() {
	begin:
	int i;
	int NilaiAwal,NilaiAkhir,Hasil;
	cout<<"\tMENU"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian\n"<<endl;
	cout<<"Masukan Nilai Pilihan [1/2/3/4]\t: ";cin>>i;
	switch (i){
		case 1:
			cout<<"Masukan Nilai Awal\t: ";cin>>NilaiAwal;
			cout<<"Masukan Nilai Awal\t: ";cin>>NilaiAkhir;
			Hasil = NilaiAwal + NilaiAkhir;
			cout<<"Hasil "<<NilaiAwal<<" + "<<NilaiAkhir<<" = "<< Hasil;
			break;
		case 2:
			cout<<"Masukan Nilai Awal\t: ";cin>>NilaiAwal;
			cout<<"Masukan Nilai Awal\t: ";cin>>NilaiAkhir;
			Hasil = NilaiAwal - NilaiAkhir;
			cout<<"Hasil "<<NilaiAwal<<" - "<<NilaiAkhir<<" = "<< Hasil;
			break;
		case 3:
			cout<<"Masukan Nilai Awal\t: ";cin>>NilaiAwal;
			cout<<"Masukan Nilai Awal\t: ";cin>>NilaiAkhir;
			Hasil = NilaiAwal * NilaiAkhir;
			cout<<"Hasil "<<NilaiAwal<<" x "<<NilaiAkhir<<" = "<< Hasil;
			break;
		case 4:
			cout<<"Masukan Nilai Awal\t: ";cin>>NilaiAwal;
			cout<<"Masukan Nilai Awal\t: ";cin>>NilaiAkhir;
			Hasil = NilaiAwal / NilaiAkhir;
			cout<<"Hasil "<<NilaiAwal<<" : "<<NilaiAkhir<<" = "<< Hasil;
			break;
		default:
			cout<<"input salah"<<endl;
				
	}
	return 0;
}
