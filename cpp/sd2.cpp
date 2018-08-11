#include<iostream> 
#include<cstdlib> 
using namespace std; 
int main( ) 
{ 
	int x; 
	int *px; 
	x=2; 
	px = &x; // membaca alamat dari x 
	cout <<"Nilai x........: "<<x<< endl; 
	cout <<"Nilai *px...... : "<<*px<< endl; 
	cout <<"Nilai px ( alamat x ) ..: "<<px<<endl;
	system("PAUSE"); 
	return 0; 
}

