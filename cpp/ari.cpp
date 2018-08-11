#include <iostream>
#define n 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	string kode,nama,arr_kode[n],arr_nama[n];
	int harga,beli,jumlah,diskon,bayar;
	int arr_harga[n],arr_beli[n],arr_jumlah[n],arr_diskon[n],arr_bayar[n];
	cout<<"PT. wlwalal"<<endl;
	cout<<"alamat"<<endl;
	for(int i=0;i<n;i++){
		cout<<"masukan kode : ";cin>>kode;
		arr_kode[i] = kode;
		cout<<"masukan nama : ";cin>>nama;
		arr_nama[i] = nama;
		cout<<"harganya : Rp. ";cin>>harga;
		arr_harga[i] = harga;
		cout<<"beli brpa : ";cin>>beli;
		arr_beli[i] = beli;
		jumlah = harga * beli;
		arr_jumlah[i] = jumlah;
		if(jumlah > 1000000){
			diskon = jumlah * 0.05;
			arr_diskon[i] = diskon;
		}else if(jumlah > 500000){
			diskon = jumlah * 0.02;
			arr_diskon[i] = diskon;
		}else{
			diskon = 0;
			arr_diskon[i] = diskon;
		}
		
		bayar = jumlah - diskon;
		arr_bayar[i] = bayar;
		
	}
	cout<<endl;
	cout<<" ============================================================================="<<endl;
	cout<<"| No\t";
	cout<<"| Kode\t";
	cout<<"| Nama\t";
	cout<<"| harga\t";
	cout<<"| beli\t";
	cout<<"| jml\t";
	cout<<"| dis\t";
	cout<<"| Bayar\t";
	cout<<" | \n ============================================================================="<<endl;
	for(int i=0;i<n;i++){
		cout<<"| "<<i+1<<"\t";
		cout<<"| "<<arr_kode[i]<<"\t";
		cout<<"| "<<arr_nama[i]<<"\t";
		cout<<"| "<<arr_harga[i]<<"\t";
		cout<<"| "<<arr_beli[i]<<"\t";
		cout<<"| "<<arr_jumlah[i]<<"\t";
		cout<<"| "<<arr_diskon[i]<<"\t";
		cout<<"| "<<arr_bayar[i]<<"\t";
		cout<<" |"<<endl;
	}
	cout<<" ============================================================================="<<endl<<endl;
	int total=0;
	cout<<"total : Rp.";
	for(int i=0;i<n;i++){
		total += arr_bayar[i];
	}
	cout<<total<<endl;
}
