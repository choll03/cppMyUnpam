#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int n =12;
int main() {
	int s[n] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int T1 = n-1, T2 = n;
	
	if(T1 >= 10){
		for(int i = 0;i<10;i++){
			s[T1] = 0;
			T1 = T1-1;
		}
	}
	cout<<"Stack : ";
	for(int i = 0;i<12;i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;
	cout<<T1<<endl;
	if(T1 < 10){
		for(int i=0;i<=T1;i++){
			s[T1] = 0;
			T1 = T1-1;
		}
	}
	cout<<"Stack : ";
	for(int i = 0;i<12;i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;
	
}
void no1(){
	int s[n], T = -1;
	int x;
	do{
	
		cout<<"masukan 10 nilai :"<<endl;
		if(T >= n-1){
			cout<<"penuh"<<endl;
		}else{
			for(int i=0; i < 10; i++){
				if(T >= 11){
					break;
				}else{
					cout<<"nilai ke "<<i+1<<" :";cin>>x;
					T = T+1;
					s[T] = x;
				}
			}
		}
		
		cout<<T<<endl;
		cout<<"Stack : ";
		for(int i = 0;i<12;i++){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}while(T < 11);
}
