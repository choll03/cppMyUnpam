#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int i,j;
	cout<<"Masukan Nilai i ";
	cin>>i;
	cout<<"Masukan Nilai j ";
	cin>>j;
	if (i<10){
		cout<<"i < 10"<<endl;
	}else if (j>20){
		cout<<"j > 20 & i > 10"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	return 0;
}
