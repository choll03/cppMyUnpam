#include <iostream>
using namespace std;
int main() {
	int i,j;
	for(i=10;i>0;i--){
		cout<<"**  ";
		switch (i){
			case 3 :
				cout<<"      **";
				break;
			case 4:
				cout<<"      **";
				break;
			case 7:
				cout<<"**      ";
				break;
			case 8:
				cout<<"**      ";
				break;
			default:
				cout<<"********";
				break;
		}
		cout<<"  **";
		for(j=10;j>i;j--){
			cout<<" ";
		}
		cout<<"**";
		for(j=2;j<i;j++){
			cout<<"  ";
		}
		if(i==1){
			cout<<"";
		}else{
			cout<<"**";
		}
		for(j=10;j>i;j--){
			cout<<" ";
		}
		cout<<"**  ";
		for(j=0;j<i;j++){
			cout<<" ";
		}
		cout<<"**";
		for(j=10;j>i;j--){
			if(i==5){
				cout<<"**";
			}else{
			cout<<"  ";
			}
		}
		cout<<"**";
		for(j=0;j<i;j++){
			cout<<" ";
		}
		cout<<" **  **";
		if(i==1){
			cout<<"******";
		}
		if(i==2){
			cout<<"******";
		}
	cout<<endl;
	}	
	return 0;
}
