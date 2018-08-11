#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main()
{
	string pilih;
	int a;
	hitung:
	cout<<"Masukan NIM\t:";
	cin>>a;
	if(a ==2016141807){
	
		cout<<"\nISMAIL";
		cout<<"\n02TPLE021";
		cin>>pilih;
		if(pilih=="y"||pilih=="Y")
		{
			goto hitung;
		}else
		{
			cout<<"program berhenti!";
		}
	
	}else
		{
		cout<<"\nAhmad Zawawi";
		cout<<"\n02TPLE021";
		cin>>pilih;
		if(pilih=="y"||pilih=="Y")
		{
			goto hitung;
		}else
		{
			cout<<"program berhenti!";
		}
		}
	return 0;
}
