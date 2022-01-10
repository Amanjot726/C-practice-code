#include <iostream>
using namespace std;
int main(){
	int  i, j, n;
	input:
		cout << "Enter number of rows:  ";
		cin >> n;
	if (n>0 && n<=50){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= i; j++)
			{
			cout << i-j+1;
			}
			cout << "\n";
		}
	}
	else{
		cout<<"\nEnter number greater than 0 and smaller than 50 or equal to 50\n";
		goto input;
	}
}
