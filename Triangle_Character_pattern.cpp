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
		
	if (n>0 && n<=13){
		while(i<=n){
			int j=1;
			value=character+i-1;
			while(j<=i){
				cout<<value;
				j++;
				value++;
			}
			i++;
			cout<<endl;
		}
	}
	else{
		cout<<"\nEnter number greater than 0 and smaller than 13 or equal to 13\n";
		goto input;
	}	
}
