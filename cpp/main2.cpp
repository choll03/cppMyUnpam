#include <iostream>
using namespace std;
int main() {
	int i,j,k;
	cout<<"masukan nilai i : ";
	cin>>i;
	cout<<"\nMasukan nilai j : ";
	cin>>j ;
	cout<<"\nMasukan nilai k : ";
	cin>>k;
	if((i < 10 | j> 20)& k == 15)
	{
		cout<<"benar"<<endl;
	}else
	{
		cout<<"salah"<<endl;
	}
	return 0;
}
