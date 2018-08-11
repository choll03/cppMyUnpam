#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


void tampilArray(int array[]){
	for(int i=0;i<5;i++){
		cout<<array[i]<<"  ";
	}
}


int main() {
	int nilai;
	int array[] = {4, 2, 9 , 10, 1};
	//	SEBELUM SORTING
	cout<<"Sebelum sort\t: ";
	tampilArray(array);
	cout<<endl<<endl;
	
	
	//	SORTING ASC
	cout<<"Sorting ASC\t: ";
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			if(array[j] > array[j+1]){
				nilai = array[j];
				array[j] = array[j+1];
				array[j+1] = nilai;
			}
			
			
		}
	}
	tampilArray(array);
	cout<<endl<<endl;
	
	
	//	SORTING DESC
	cout<<"Sorting DESC\t: ";
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			if(array[j] < array[j+1]){
				nilai = array[j];
				array[j] = array[j+1];
				array[j+1] = nilai;
			}
			
			
		}
	}
	tampilArray(array);
	
	cout<<endl<<endl;
}

























