#include <iostream>
using namespace std;
int main(){
	int n;
	int i=1;
	char character='A';
	char value;
	input:
		cout << "Enter number of rows:  ";
		cin >> n;
		
	if (n>0 && n<=26){
		while(i<=n){
			int j=1;
			value=character+i-1;
			while(j<=i){
				cout<<value;
				j++;
			}
			i++;
			cout<<endl;
		}
	}
	else{
		cout<<"\nEnter number greater than 0 and smaller than 26 or equal to 26\n";
		goto input;
	}	
}
