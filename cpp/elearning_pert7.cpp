#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int S[5], T = -1, x, total=0;
	
	T++;
	while(T < 5){
		cout<<"masukan nilai ke "<<T+1<<" : ";cin>>x;
		S[T] = x;
		T++;
	}
	
	for(int i=0;i<5;i++){
		total += S[i];
	}
	
	cout<<"\njumlah = "<<total<<endl;
}
