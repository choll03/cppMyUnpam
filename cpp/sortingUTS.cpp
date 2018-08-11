#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int tampilArray(int array[]){
	for(int i=0;i<5;i++){
		cout<<array[i]<<"  ";
	}
}

int main() {
	int array[] = {4, 2, 9 , 10, 1};
	// i = 0
		// j = 0 -> { 2, 4, 9, 10, 1 }
		// j = 1 -> { 2, 4 , 9, 10, 1 }
		// j = 2 -> { 2, 4, 9, 10, 1 }
		// j = 3 -> { 2, 4, 9, 1, 10 }
		// j = 4 -> { 2, 4, 9, 1, 10 }
	// i = 1
		// j = 0 -> { 2, 4, 9, 1, 10 }
		// j = 1 -> { 2, 4, 9, 1, 10 }
		// j = 2 -> { 2, 4, 1, 9, 10 }
		// j = 3 -> { 2, 4, 1, 9, 10 }
		// j = 4 -> { 2, 4, 1, 9, 10 }
	// i = 2
		// j = 0 -> { 2, 4, 1, 9, 10 }
		// j = 1 -> { 2, 4, 1, 9, 10 }
		// j = 2 -> { 2, 1, 4, 9, 10 }
		// j = 3 -> { 2, 1, 4, 9, 10 }
		// j = 4 -> { 2, 1, 4, 9, 10 }
	// i = 3
		// j = 0 -> { 2, 1, 4, 9, 10 }
		// j = 1 -> { 1, 2, 4, 9, 10 }
		// j = 2 -> { 1, 2, 4, 9, 10 }
		// j = 3 -> { 1, 2, 4, 9, 10 }
		// j = 4 -> { 1, 2, 4, 9, 10 }
		
		
	int i,j;
	int nilai;//10
	
	
	//	SEBELUM SORTING
//	cout<<"Sebelum sort\t: ";
//	for(int a=0;a<5;a++){
//		cout<<array[a]<<"  ";
//	}
	tampilArray(array);
	cout<<endl;
	//	SORTING ASC
//	for(i=0;i<1;i++){
		for(j=0;j<5;j++){
//			cout<<array[j]<<"  ";
			if(array[j] > array[j+1]){			
				nilai = array[j];
				array[j] = array[j+1];
				array[j+1] = nilai;
			}
		}
//		cout<<endl;
//	}
	tampilArray(array);
		for(j=0;j<5;j++){
//			cout<<array[j]<<"  ";
			if(array[j] > array[j+1]){			
				nilai = array[j];
				array[j] = array[j+1];
				array[j+1] = nilai;
			}
		}
		cout<<endl;
		tampilArray(array);
//	cout<<endl;
//	cout<<"Sorting ASC\t: ";
//	//	Tampilan ASC
//	for(int b=0;b<5;b++){
//		cout<<array[b]<<"  ";
//	}
//	
	
//	//	SORTING DESC
//	for(i=0;i<5;i++){
//		for(j=0;j<5-i;j++){
//			if(array[j] < array[j+1]){
//				nilai = array[j];
//				array[j] = array[j+1];
//				array[j+1] = nilai;
//			}
//		}
//	}
//	
//	cout<<endl;
//	cout<<"Sorting DESC\t: ";
//	//	Tampilan DESC
//	for(int b=0;b<5;b++){
//		cout<<array[b]<<"  ";
//	}
}
