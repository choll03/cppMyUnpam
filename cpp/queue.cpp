#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define n 10

void INSERT(void);
void DELETE(void);
void CETAKLAYAR(void);
void Inisialisasi(void);
void RESET(void);

int PIL,F,R;
char PILIHAN[1],HURUF;
char Q[n];

using namespace std;

int main()
{
	Inisialisasi();
	do
	{
		cout<<" ANIMASI QUEUE"<<endl;
		cout<<"=============="<<endl;
		cout<<"1. INSERT"<<endl;
		cout<<"2. DELETE"<<endl;
		cout<<"3. CETAK QUEUE"<<endl;
		cout<<"4. QUIT"<<endl<<endl;
		cout<<"PILIHAN : "; cin>>PILIHAN;
		PIL=atoi(PILIHAN);
		switch (PIL)
		{
			case 1:
			INSERT();
			break;
			case 2:
			DELETE();
			break;
			case 3:
			CETAKLAYAR();
			break;
			default:
			cout<<"TERIMA KASIH"<<endl;
			break;
		}
		cout<<"Press any key to continue"<<endl;
		getch();
		system("cls");
	}
	while (PIL<4);
}
void INSERT(void)
{
	if(R<n-1)
	{
		cout<<endl<<"MASUKKAN 1 HURUF : ";
		cin>>HURUF;
		Q[++R]=HURUF;
	}
	else
		cout<<"Antrian Penuh"<<endl;
}
void CETAKLAYAR(void)
{
	if(F<R+1)
	{
		for (int i=F;i<=R;i++)
		cout<<"Q["<<i<<"] = "<<Q[i]<<endl;
	}
	else
		cout<<"QUEUE Kosong"<<endl;
}
void DELETE(void)
{
	if(F<=R+1)
	{
		HURUF=Q[F];
		Q[F++]='\0';
		cout<<"Data yang diambil : "<<HURUF<<endl;
		if(F==n)
		RESET();
	}
	else
		cout<<"Antrian Kosong"<<endl;
}
void Inisialisasi(void)
{
	F=0;
	R=-1;
}

void RESET(void)
{
	F=0;
	R=-1;
}
