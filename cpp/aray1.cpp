#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int data[10]={10,23,43,4,5,67,8,1,32,11};
	int x,i,nilai;
	for(i=0;i<10;i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
	cin>>nilai;
	for(x=0;x<10;x++){
		if(data[x]==nilai){
			cout<<x<<endl;
		}
	}
	return 0;
}
