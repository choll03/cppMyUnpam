#include <iostream>
#include <conio.h>

using namespace std;

int T = -1, n = 5, s[5] , x , T2 = 5, s2[5] = {0};

/*                    STACK SINGLE                                */

void SinglePush(int nilai)
{
	if(T == n-1)
	{
		cout<<"Stack Penuh"<<endl;
	}
	else
	{
		T = T + 1;
		s[T] = nilai;
	}
}

void SinglePop()
{
	if(T == -1)
	{
		cout<<"Tidak ada nilai dalam Stack"<<endl;
	}
	else
	{
		x = s[T];
		T= T - 1;
	}
}

void SingleTampil()
{
	if(T == -1)
	{
		cout<<"Stack : [ ]"<<endl;
	}
	else
	{
		cout<<"Stack : [ ";
		for(int i=0;i <= T;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<"]"<<endl;
	}
}

/*                    STACK DOUBLE                                */

void DoublePush(int nilai)
{
	if(T2 - T == 1)
	{
		cout<<"Stack Penuh"<<endl;
	}
	else
	{
		T2 = T2 - 1;
		s2[T2] = nilai;
	}
}

void DoublePop()
{
	if(T == -1 && T2 == n)
	{
		cout<<"Tidak ada nilai dalam Stack"<<endl;
	}
	else
	{
		s2[T2] = 0;
		T2 = T2 + 1;
	}
}

void DoubleTampil()
{
	if(T == -1 && T2 == n)
	{
		cout<<"Stack : [ 0 0 0 0 0 ]"<<endl;
	}
	else
	{
		cout<<"Stack : [ ";
		for(int i=0;i <= n-1;i++)
		{
			cout<<s2[i]<<" ";
		}
		cout<<"]"<<endl;
	}
}

/*                    MENU                                */

void mainMenu(char judul[20])
{
	cout<<endl<<"==========="<<judul<<"============="<<endl<<endl;
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Kembali"<<endl;
	cout<<endl<<"=================================="<<endl;
}

void index(void (*Tampil)(),void (*Menu)(char name[20]),char param[20],void (*push)(int n),void (*pop)())
{
	int pilih;
	do
	{
		
		(*Tampil)();
		(*Menu)(param);
		cout<<"pilih : ";cin>>pilih;
		
		if(pilih == 1)
		{
			cout<<"masukan nilai : ";cin>>x;
			(*push)(x);
		}
		
		system("cls");
		
		if(pilih == 2)
		{
			(*pop)();
		}
		
	} while(pilih != 3);

}

int main()
{
	int pilihan;
	do
	{
	
		cout<<"1. Single Stack"<<endl;
		cout<<"2. Double Stack"<<endl;
		cout<<"3. Keluar"<<endl;
		cout<<"Pilih Menu : ";cin>>pilihan;
		system("cls");
		switch(pilihan)
		{
			case 1:
				index(&SingleTampil, &mainMenu,"Single Stack",&SinglePush,&SinglePop);
				break;
			case 2:
				index(&DoubleTampil, &mainMenu,"Double Stack",&DoublePush,&DoublePop);
				break;
		}
	}
	while(pilihan != 3);
	
	getch();
	return 0;
	
}

