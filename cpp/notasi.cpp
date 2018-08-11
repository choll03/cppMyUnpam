#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include<conio.h>

using namespace std;

string temp="";
int pilihan;

/*		Fungsi mengkonversikan tipe data String			*/

string toStr(char a)
{
	ostringstream tempat;
	tempat << a;
	return tempat.str();
}

/*		Fungsi membalikan String			*/

void Reverse(string &str)
{
	int n = str.length();
	for(int i=0; i<n/2; i++)
	{
		swap(str[i], str[n-i-1]);
	}
}

/*		Fungsi urutan proses notasi Aritmatika			*/

int urutan(char op)
{
	if(op=='^') return 3;
	else if(op == '*' || op=='/') return 2;
	else if(op =='+' || op=='-') return 1;
	else return -1;
}

/*		Fungsi mengkonversi infix ke postfix			*/

void inToPost(string s, string &output, bool R)
{
	stack<char> stack;
	stack.push('N');
	string ns;
	
	int l = s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i]>='a' && s[i]<='z') ns += s[i];
		else if (s[i] == '(')
		{
			if(R == true)
			{
				while(stack.top() != 'N' && stack.top() != '(')
				{
					
					char c = stack.top();
					stack.pop();
					ns += c;
				}
				if(stack.top() == '(') stack.pop();
			}
			else stack.push(s[i]);
		}
		else if(s[i] == ')')
		{
			if(R == true ) {
				stack.push('(');
			}else{
				while(stack.top() != 'N' && stack.top() != '(')
				{
					char c = stack.top();
					stack.pop();
					ns += c;
				}
				if(stack.top() == '(') stack.pop();
			}
		}
		else
		{
			while(stack.top() != 'N' && urutan(s[i]) <= urutan(stack.top()))
			{
				char c = stack.top();
				stack.pop();
				ns += c;			
			}
			stack.push(s[i]);
		}
			
	}
	while(stack.top() != 'N')
	{
		char c = stack.top();
		stack.pop();
		ns += c;
	}
	output = ns;
}

/*		Fungsi mengkonversi postfix ke infix		*/

void postToIn(string s, string &nsp)
{
	stack<string> stack;
	string op,op1;
	
	int l = s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i] =='^' || s[i] =='*' || s[i] =='/' || s[i] =='+' || s[i] =='-')
		{
			op = stack.top();
			stack.pop();
			op1 = stack.top();
			string c = "("+op1+s[i]+op+")";
			stack.top() = c;
		}
		else
		{
			string c = toStr(s[i]);
			stack.push(c);
		}
	}
	nsp = stack.top();
}

/*		Fungsi mengkonversikan antar notasi dengan memanggil fungsi-fungsi sebelumnya			*/

void Convert(string input, string notasi,bool R)
{
	string output;
	
	if(notasi == "toPostfix")
	{
		if(temp == "") inToPost(input,output,false);
		else inToPost(temp,output,false);
		
	}
	else if(notasi == "toPrefix")
	{
		if(temp == "")
		{
			Reverse(input);
			inToPost(input, output,true);
			Reverse(output);
		}
		else
		{
			Reverse(temp);
			inToPost(temp, output,true);
			Reverse(output);
		}
	}
	else if(notasi == "toInfix")
	{
		postToIn(input,output);
		if(R == true)
		{
			string s;
			Reverse(output);
			for(int i =0 ; i < output.length();i++)
			{
				if(output[i] == '(') s+= ")";
				else if(output[i] == ')') s+= "(";
				else s+= output[i];
			}
			output = s;
		}
		temp=output;
	}
	else
	{
		output == "Keyword yang anda masukan salah !";
	}
	cout<<output<<endl;
}

/*		Fungsi Memasukan judul			*/

void judul(string s)
{
	cout<<"================================================================\n"<<endl;
	cout<<s<<endl;
	cout<<"\n================================================================"<<endl;
}

/*		Fungsi Kembali ke Menu utama			*/

void back()
{
	char kembali;
	cout<<"\nTekan Y untuk Kembali ke Menu : ";cin>>kembali;
	if(kembali == 'y' || kembali == 'Y') system("cls");
	else pilihan = 4;
}

int main()
{
	
	do{
		cout<<"Create by : ismail\tNim : 2016141807\tKelas : 03TPLE005"<<endl;
		judul("\t\t\tMenu");
		cout<<"1. Infix Mode"<<endl;
		cout<<"2. Postfix Mode"<<endl;
		cout<<"3. Prefix Mode"<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<"pilih : ";cin>>pilihan;
		system("cls");
		if(pilihan == 1)
		{
			// INFIX MODE
			temp="";
			string infix;
			judul("\tMasukan format infix -- ex: (a+b)*c ");
			cout<<"infix\t: ";cin>>infix;
			cout<<"Postfix\t: ";Convert(infix,"toPostfix",false);
			cout<<"Prefix\t: ";Convert(infix,"toPrefix",false);
			back();
				
		}
		if(pilihan == 2)
		{
			// POSTFIX MODE
			temp="";
			string postfix;
			judul("Masukan format postfix -- ex: ab+c* ");
			cout<<"Postfix\t: ";cin>>postfix;
			cout<<"Infix\t: ";Convert(postfix,"toInfix",false);
			cout<<"Prefix\t: ";Convert(postfix,"toPrefix",false);
			back();			
		}
		if(pilihan == 3)
		{
//			 PREFIX
			string prefix;
			judul("Masukan format prefix -- ex: *+abc ");
			cout<<"Prefix\t: ";cin>>prefix;
			Reverse(prefix);
			cout<<"Infix\t: ";Convert(prefix,"toInfix",true);
			cout<<"Postfix\t: ";Convert(prefix,"toPostfix",false);
			back();
			
		}
	}while(pilihan != 4);
	
}



void tes(){
//	string s = "a+b-c*d";
//	stack<char> stack;
//	stack.push('N');
//	string postfix,op,op1;
//	int l = s.length();
//	for(int i=0;i<l;i++){
//		if(s[i] =='+' || s[i] =='*' || s[i] =='/'){
//			op = stack.top();
//			stack.pop();
//			op1 = stack.top();
//			string c = op1+s[i]+op;
//			stack.top() = c;
//		}else{
//			string c = toStr(s[i]);
//			stack.push(c);
//		}
//	}
//	cout<<stack.top();
//	for(int i=0;i<l;i++){
//		if(s[i]>='a' && s[i]<='z')
//			postfix += s[i];
//		else{
//			while(stack.top() != 'N' && urutan(s[i]) <= urutan(stack.top()))
//			{
//				char c = stack.top();
//				stack.pop();
//				postfix += c;
//				
//			}
//			stack.push(s[i]);
//		}
//		
//	}
//	cout<<postfix<<endl;
//	while(stack.top() != 'N')
//	{
//		char c = stack.top();
//		stack.pop();
//		postfix += c;
//	}
//	cout<<postfix;
//
}
