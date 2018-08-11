#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	int n = 5;
	int s[n];
	int T = -1;
	int x;
	
	while(T < n-1){
		cin >> x;
		T = T + 1;
		s[T] = x;
		
		for(int i=0; i < T+1 ; i++){
			cout<<s[i]<<',';
		}
		cout<<endl;
		
	}
	
	
	
}
