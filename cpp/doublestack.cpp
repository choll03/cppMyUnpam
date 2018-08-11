#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void SingleStack(){
	int T = -1;
	int pilih;
	int s[5];
	do{
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. tampilkan"<<endl;
		cout<<"pilih :";cin>>pilih;
		if(pilih == 1){
			if(T == 4){
				cout<<"penuh"<<endl;
			}else{
				int x;
				cout<<"masukan nilai :";cin>>x;
				T++;
				s[T] = x; 
			}
		}
		system("cls");
		if(pilih == 2){
			if(T == -1){
				cout<<"kosong"<<endl;
			}else{
				T--;
			}
		}
		if(pilih == 3){
			if(T == -1){
				cout<<"kosong"<<endl;
			}else{
				cout<<"MyArray : ";
				for(int i=0;i<T;i++){
					cout<<s[i]<<' ';
				}
				cout<<endl;
			}
		}
	}while(pilih != 4);
}
void DoubleStack(){
	int T1 = -1, T2 = 5;
	int pilih;
	int s[5]={0};
	do{
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. tampilkan"<<endl;
		cout<<"pilih :";cin>>pilih;
		if(pilih == 1){
			if(T2-T1 == 1){
				cout<<"penuh"<<endl;
			}else{
				int x;
				cout<<"masukan nilai :";cin>>x;
				T2--;
				s[T2] = x; 
			}
		}
		system("cls");
		if(pilih == 2){
			if(T1 == -1 && T2 == 5){
				cout<<"kosong"<<endl;
			}else{
				s[T2] = 0;
				T2++;
			}
		}
		if(pilih == 3){
			if(T1 == -1 && T2 == 5){
				cout<<"kosong"<<endl;
			}else{
				cout<<"MyArray : ";
				for(int i=0;i< 5;i++){
					cout<<s[i]<<' ';
				}
				cout<<endl;
			}
		}
	}while(pilih != 4);
}
int main() {
	
	int pilihan;
	
	cout<<"1. single stack"<<endl;
	cout<<"2. double stack"<<endl;
	cout<<"3. kluar"<<endl;
	cout<<"pilih ";cin>> pilihan;
	system("cls");
	if(pilihan == 1){
		// SINGLE STACK 
		SingleStack();
	}
	if(pilihan == 2){
		// DOUBLE STACK
		DoubleStack();
	}
	if(pilihan == 3){
		exit;
	}
}

