#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void SeqSearch3(int Data[], int n, int x, bool *ketemu);
int main(void)
{
	int Data[]={23,56,10,90,35,45,9,100,200,65};
	int x,i,jmlDat=10;
	bool ketemu;
	cout<<"Elemen Array : ";
	for(i=0;i<jmlDat;i++)cout<<Data[i]<<" ";
		cout<<endl;
		cout<<"Masukan data yang akan dicari ?:";cin>>x;
		SeqSearch3(Data,jmlDat,x,&ketemu);
		if(ketemu==true){
			cout<<"Data yang dicari ditemukan"<<endl;
		}else{
			cout<<"Data yang dicari tidak ada dalam array"<<endl;
		}
	
}
void SeqSearch3(int Data[],int n,int x, bool *ketemu)
{
	int i=0;*ketemu=false;
	while(i<n && !(*ketemu))
	{
		if(Data[i]==x){
		 *ketemu=true;
		}else{
			i++;
		} 
	}
}
