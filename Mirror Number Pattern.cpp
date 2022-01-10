#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int i=1;
	int n;
	string spaces;
	input:
		cout << "Enter number of rows:  ";
		cin >> n;
		
	if (n>0 && n<=50){
		while(i<=n){
			int temp=n-i;
			while(temp>=1){
				int count = 0;
				int f = n-temp+1;
				spaces = "";
			    while (f != 0)
			    {
			        f = f / 10;
			        ++count;
			    }
			    for(int c=count;c>0;c--){
			    	spaces = spaces+" ";
				}
				cout<<spaces;
				temp--;
			}                
			temp=1;
			while(temp<=i){
				cout<<temp;
				temp++;
			}
			i++;
			cout<<endl;
		}
	}
	else{
		cout<<"\nEnter number greater than 0 and smaller than 50 or equal to 50\n";
		goto input;
	}	
}
