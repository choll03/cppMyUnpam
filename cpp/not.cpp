#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include<conio.h>

using namespace std;

string toString(char op){
	ostringstream temp;
	temp << op;
	return temp.str();
}

void membalikan(string &str){
	int n = str.length();
	for(int i=0; i<n/2; i++)
	{
		swap(str[i], str[n-i-1]);
	}
}

int priority(char a)
{
	if(a=='^') return 3;
	else if(a == '*' || a=='/') return 2;
	else if(a =='+' || a=='-') return 1;
	else return -1;
}

void infixtopostfix(string s, string &out){
	stack<char> stack;
	stack.push('#');
	string output;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a' && s[i]<='z'){
			output += s[i];
		}
		else if(s[i] == '(') stack.push('(');
		else if(s[i] == ')'){
			while(stack.top() != '#' && stack.top() != '('){
				char c = stack.top();
				stack.pop();
				output+= c;
			}
			if(stack.top() == '(') stack.pop();
		}
		else{
			while(stack.top() != '#' && priority(s[i]) <= priority(stack.top())){
				char p = stack.top();
						stack.pop();
						output += p;
						
					}
					stack.push(s[i]);
				}
				
			}
			while(stack.top() != '#'){
				char p = stack.top();
				stack.pop();
				output += p;
			}
			out = output;
}
void infixtoprefix(string s, string &out){
	membalikan(s);
	infixtopostfix(s, out);
	membalikan(out);
	cout<<out<<endl;
}
void postfixtoinfix(string s,string &out){
	stack<string> stack;
	string t,u;
	for(int i=0;i<s.length();i++){
		if(s[i] =='^' || s[i] =='*' || s[i] =='/' || s[i] =='+' || s[i] =='-'){
			t = stack.top();
			stack.pop();
			u = stack.top();
			string c = u+s[i]+t;
			stack.top() = c;
		}
		else{
			string c = toString(s[i]);
			stack.push(c);
		}
	}
	out = stack.top();

}
void prefixtoinfix(string s, string &out){
	membalikan(s);
	postfixtoinfix(s , out);
	membalikan(out);
	cout<<out<<endl;
}

int main(){
	int pilihan;
	do{
		cout<<"1. Infix"<<endl;
		cout<<"2. Postfix"<<endl;
		cout<<"3. Prefix"<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<"pilih : ";cin>>pilihan;
		system("cls");
		if(pilihan == 1)
		{
			string s;
			string postfix,prefix;
			cout<<"infix:";cin>>s;
			infixtopostfix(s, postfix);
			cout<<postfix<<endl;
			infixtoprefix(s, prefix);
					
		}
		if(pilihan == 2)
		{
			string s;
			string infix,prefix;
			cout<<"postfix:";cin>>s;
			postfixtoinfix(s, infix);
			cout<<infix<<endl;
			infixtoprefix(infix , prefix);
					
		}
		if(pilihan == 3)
		{
			string s;
			string infix,postfix;
			cout<<"prefix:";cin>>s;
			prefixtoinfix(s, infix);
			infixtopostfix(infix, postfix);
			cout<<postfix<<endl;
				
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
