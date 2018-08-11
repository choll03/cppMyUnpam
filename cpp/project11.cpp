#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int array[]={1,8,4,9,6};
	int temp=0;
	for(int x=0; x<5; x++){
		temp = array[x];
		for(int y=0; y<5; y++){
			//cout<<array[y]<<" ";
			if(array[x]<array[y]){
				temp=array[y];
				//cout<<temp<<"*";
				array[y]=array[x];
				//cout<<array[y]<<"/";
				array[x]=temp;
				//cout<<array[x]<<"+ ";
			}
		}
		cout<<endl;
	}
	for(int x=0;x<10;x++){
		cout<<array[x];
	}
	return 0;
}
