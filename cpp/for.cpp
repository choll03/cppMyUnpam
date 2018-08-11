#include <iostream>
using namespace std;
int main() {
	int i,j,a,b;
	for (i = 10 ; i > 0; i--){
		for (j = 0; j<i ;j++){
			cout<<"*";
		}
		for (j =10; j>i;j--){
			cout<<"  ";
		}
		for (j = 0; j<i ;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for (a = 1;a<=10;a++){
		for(b=0;b<a;b++){
			cout<<"*";
		}
		for(b=10;b>a;b--){
			cout<<"  ";
		}
		for(b=0;b<a;b++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
