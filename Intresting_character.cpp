#include <iostream>
using namespace std;
int main(){
	int n;
	int i=1;
	char initial='A';
	char character;
	input:
		cout << "Enter number of rows:  ";
		cin >> n;
		
	if (n>0 && n<=26){
		character=initial+n-1;
		while(i<=n){
			int j=1;
			char v = character;
			while(j<=i){
				cout<<v;
				j++;
				v++;
			}
			i++;
			character--;
			cout<<endl;
		}
	}
	else{
		cout<<"\nEnter number greater than 0 and smaller than 26 or equal to 26\n";
		goto input;
	}	
}
