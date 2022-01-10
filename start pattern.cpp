#include<iostream>
using namespace std;
int main(){
	int n, s, i, j;
	input:
		cout<<"Enter number of rows: ";
		cin>>n;
	if (n>0 && n<=50){
		for(i = 1; i <= n; i++){
			for(s = i; s < n; s++){
				cout << " ";
			}
			for(j = 1; j <= (2 * i - 1); j++){
				cout << "*";
			}
			cout << "\n";
		}
	}
	else{
		cout<<"\nEnter number greater than 0 and smaller than 50 or equal to 50\n";
		goto input;
	}
}
