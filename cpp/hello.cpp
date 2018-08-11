#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include <sstream>
using namespace std;

struct karyawan{
	char nama[20];
	int id;
};
string toString(int op){
	ostringstream temp;
	temp << op;
	return temp.str();
}


int main(){
	string z = "color 9";
	string d = "0110";
	while(d != ""){
		for(int i=1;i<8;i++){
			cout<<d;
			system(("color "+toString(i)).c_str());
		}
	}
//		system(("color "+toString(i)).c_str());
}
