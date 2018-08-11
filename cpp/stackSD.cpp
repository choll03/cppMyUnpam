#include<iostream>
using namespace std;

int main ()
{
	int SA[20], SB[20],X,I, TOPA,TOPB;
	TOPA= -1; TOPB = -1;
	cin>> X;
	TOPA++ ; SA[TOPA]=X;
	for ( I=1 ; I<=9 ; I++)
	{
		cin>> X;
		
		while(TOPA > -1 && SA[TOPA] > X)
		{
			TOPB++;
			SB[TOPB] = SA[TOPA];
			TOPA--;
		}
		
		TOPA++;
		SA[TOPA]= X;
		
		while(TOPB> -1)
		{
			TOPA++;
			SA[TOPA] = SB[TOPB];
			TOPB--;
		}
	}
	cout<<"hasil\t: ";
	for ( I=1 ; I<=9 ; I++)
	{
		cout<<SA[I]<<" ";
	}
}
