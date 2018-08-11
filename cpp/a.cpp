#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void line();
int main() {
    string name[] = {"Di Maria", "Messi", "De Gea", "Ronaldo", "Atep","Andik"};
    int sname = sizeof(name)/sizeof(name[0]);
    cout<<"Nama : "<<endl;
    for(int i=0;i<sname;i++){
    	cout<<i+1<<". "<<name[i]<<endl;
	}
	begin:
    line();
    sort(name, name + sname);
    cout<<"1. Asc"<<endl;
    cout<<"2. Dcs"<<endl;
    int pilih;
    cout<<"Pilih penyortingan : ";cin>>pilih;
    if(pilih==1){
    	for(int i = 0; i < sname; ++i)
        cout<< name[i] << endl;
	}else if(pilih==2){
		for(int i = sname-1; i >= 0; --i){
	    cout<< name[i] << endl;
	}
	}else{
		cout<<"salah";
	}
	goto begin;
    return 0;
}
void line(){
	cout<<"======================================"<<endl;
}
