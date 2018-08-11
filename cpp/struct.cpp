#include <iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

string menu[6] = {"Buat Simpul","Insert Kiri","Insert Kanan","Insert Tengah","Tampilkan","Keluar"};
int nilai;
int pilih;

struct simpul
{	int info;
	struct simpul *link;
}*p, *First, *Last, *Q;


void buat_simpul(int x)
{
	p=(simpul*)malloc(sizeof(simpul));	
	if(p!=NULL) p->info = x;	
	else cout<<"buat simpul gagal"<<endl;
}

void input_simpul()
{
	cout<<"Masukan Nilai : ";cin>>nilai;
	buat_simpul(nilai);
	system("cls");
}

void msg(string msg)
{
	cout<<"==================================================\n"<<endl;
	cout<<"\tPesan : "<<msg<<endl;
	cout<<"\n=================================================="<<endl;
}

void simpul_awal()
{
	if(First == NULL)
	{
		input_simpul();
		First = p;
		Last = p;
		p->link = NULL;
		msg("Berhasil membuat simpul");
	}
}

void insert_kiri()
{
	if(First != NULL)
	{
		input_simpul();
		p->link = First;
		First = p;
		msg("Berhasil Insert Kiri");
	}
	else
	{
		system("cls");
		msg("Simpul Belum Dibuat");
	}
}

void insert_kanan()
{
	if(First != NULL)
	{
		input_simpul();
		Last->link = p;
		Last = p;
		p->link = NULL;
		msg("Berhasil Insert Kanan");
	}
	else
	{
		system("cls");
		msg("Simpul Belum Dibuat");
	}
}

void insert_tengah()
{
	if(First != NULL)
	{
		input_simpul();
		Q = First;
		p->link = Q->link;
		Q->link = p;
		msg("Berhasil Insert Tengah");
	}
	else
	{
		system("cls");
		msg("Simpul Belum Dibuat");
	}
}

void tampil()
{
	Q = First;
	system("cls");
	cout<<"==================================================\n"<<endl;
	cout<<"\tPesan : [ ";
	while(Q != NULL)
	{
		cout<<Q->info<<" ";
		Q = Q->link;
	}
	cout<<"]"<<endl;
	cout<<"\n=================================================="<<endl;
}

void mainMenu(int stop,void (*case_1)(),void (*case_2)(),void (*case_3)(),void (*case_4)(),void (*case_5)())
{
	for(int i=0;i<stop;i++)
	{
		
		if(stop == 5) cout<<i+1<<". "<<menu[i+1]<<endl;
		else cout<<i+1<<". "<<menu[i]<<endl;
		
	}
	
	cout<<"\nPilih : ";cin>>pilih;
	
	switch(pilih)
	{
		case 1:
			(*case_1)();
			break;
		case 2:
			(*case_2)();
			break;
		case 3:
			(*case_3)();
			break;
		case 4:
			(*case_4)();
			break;
		case 5:
			if(stop != 5){
				(*case_5)();
				break;
			}else{
				exit(1);
			}
	}

}
int main() {
	First = NULL;
	do
	{
		if(First != NULL)
		{
			mainMenu(5,&insert_kiri,&insert_kanan,&insert_tengah,&tampil,NULL);
		}
		else
		{
			mainMenu(6,&simpul_awal,&insert_kiri,&insert_kanan,&insert_tengah,&tampil);
		}
	
	}while(pilih != 6);
		
}
