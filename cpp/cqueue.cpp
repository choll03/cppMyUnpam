#include <iostream>
#include<stdlib.h>
#include<conio.h>
#define n 5

using namespace std;

int main() {
	int F=0, R=-1, Q[n], count=0, pilih;
	do{
		cout<<"1. insert"<<endl;
		cout<<"2. delete"<<endl;
		cout<<"3. tampilkan"<<endl<<endl;
		cout<<"pilihan : ";cin>>pilih;
		
		if(pilih == 1){
			int x;
			if(count == n){
				cout<<"antrian penuh, pilihlah 2 untuk menghapus antrian"<<endl;
			}else{
				cout<<"masukan angka untuk mengisi antrian : ";cin>>x;
				R = (R+1)%n;
				Q[R] = x;
				count++;
			}
			
		}else if(pilih == 2){
			if(count == 0){
				cout<<"antrian kosong, pilihlah 1 untuk mengisi antrian"<<endl;
			}else{
				F = (F+1)%n;
				count--;
			}
		}else if(pilih == 3){
			cout<<"antrian : [ ";
			for(int i=0;i<n;i++){
				cout<<Q[i]<<" ";
			}
			cout<<"]"<<endl;
		}
		cout<<"\n\npress any key to continue !"<<endl;
		getch();
		system("cls");
	}while(pilih < 4);
}
