#include<iostream>
#include<stdlib.h>
#include<conio.h>

struct SIMPUL{
	char NAMA[20];
	char NIM[15];
	char GENDER;
	int NILAI;
	struct SIMPUL *LINK;
};

SIMPUL *P,*Q,*FIRST,*LAST;
void BUAT_SIMPUL(void);
void INIT(void);
void INSERT(void);
void AWAL(void);
void HAPUS(void);
void INSERT_KANAN();
void CETAK(void);
void FREE_MEMORY(void);
int PIL;
char PILIHAN[1],HURUF;

using namespace std;

int main()
{
	INIT();
	do
	{
		system("cls");
		cout<<"LIN. SINGLY LINKED LIST"<<endl;
		cout<<"======================="<<endl;
		cout<<"1. INSERT DATA"<<endl;
		cout<<"2. HAPUS DATA"<<endl;
		cout<<"3. CETAK DATA"<<endl;
		cout<<"4. EXIT"<<endl<<endl;
		cout<<"PILIHAN (1 - 3): "; cin>>PILIHAN;
		PIL=atoi(PILIHAN);
		switch (PIL)
		{
			case 1:
				INSERT();
				break;
			case 2:
				HAPUS();
				break;
			case 3:
				CETAK();
				break;
			default:
				cout<<"TERIMA KASIH"<<endl;
				FREE_MEMORY();
			break;
		}
	}
	while (PIL<3);
}
void BUAT_SIMPUL(void)//Buat simpul baru
{
	P=(SIMPUL *)malloc(sizeof(SIMPUL));
	
	if(P!=NULL)
	{
		cout<<"Nama : ";cin>>P->NAMA;
		cout<<"NIM : ";cin>>P->NIM;
		cout<<"GENDER: ";cin>>P->GENDER;
		cout<<"NILAI : ";cin>>P->NILAI;
	}
	else
	{
		cout<<"Pembuatan Simpul Gagal"<<endl;
		getch();
		exit(1);
	}
}

void INIT(void)//Inisialisasi
{
	FIRST=NULL;
	LAST=NULL;
}

void AWAL(void)//Pembuatan simpul pertama
{
	FIRST=P;
	LAST=P;
	P->LINK=NULL;
}

void INSERT_KANAN(void)
{
	LAST->LINK=P;
	LAST=P;
	P->LINK=NULL;
}

void INSERT(void)//Insert satu simpul diujung kanan
{
	BUAT_SIMPUL();
	if(FIRST==NULL)
		AWAL();
	else
		INSERT_KANAN();
}

void HAPUS(void)//Hapus satu simpul diujung kanan
{
	if(FIRST==NULL){
		cout<<"Data Kosong"<<endl;
		
	}
	else{
		free(LAST);
		Q=FIRST;
		while(Q!=NULL){
			Q = Q->LINK;
			LAST = Q;
			
		}LAST->LINK = NULL;
	}
	getch();	
}

void CETAK() //Cetak seluruh data linked list
{
	int i=1;
	if(FIRST!=NULL)
	{
		Q=FIRST;
		while(Q!=NULL)
		{
			cout<<"Data ke : "<<i++<<endl;
			cout<<"Nama : "<<Q->NAMA<<endl;
			cout<<"NIM : "<<Q->NIM<<endl;
			cout<<"GENDER : "<<Q->GENDER<<endl;
			cout<<"NILAI : "<<Q->NILAI<<endl;
			Q=Q->LINK;
			cout<<endl;
		}
	}
	else
		cout<<"Data Kosong"<<endl;
	getch();
}

void FREE_MEMORY(void)
{
	while(FIRST!=NULL)
	{
		Q=FIRST->LINK;
		free(FIRST);
		FIRST=Q;
	}
}
