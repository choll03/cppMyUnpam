#include<iostream>
using namespace std;
int main (){
	char nama[]={'f','m','c','y','e'};
	int urutan=0;
	for(int x=0; x<5; x++){
		urutan = nama[x];
		for(int y=0; y<5; y++){
			if(nama[x]<nama[y]){
				urutan = nama[y];
				nama[y]= nama[x];
				nama[x]= urutan;
			}
		}
	}
	cout<<nama[3]<<endl;
	for(int x=0; x<5; x++){
		cout<<nama[x];
	}

}
