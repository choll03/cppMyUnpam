#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int i = 0;
	int j = 1;
	int hasil;
	hasil = i+j;
	cout<<i<<",";
	cout<<j<<",";
	
	while(hasil<10){
		cout<<hasil<<",";
		i = j;
		j = hasil;
		hasil = i+j;
	};
	cout<<"...";
	return 0;
}
