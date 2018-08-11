#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int ubahx(int a, int b){
	int c;
	c = a*b;
	return c;
}

int main(){
	int p, l, luas;
	p=5;
	l=8;
	
	cout<<p<<" * "<<l<<" = "<<ubahx(p,l)<<endl;
	return 0;
	
}
