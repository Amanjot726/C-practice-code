#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;


int main(){
	char inp;
	cout<<"Enter a character = ";
	cin>>inp;
	if (isalpha(inp)){
		if (isupper(inp)){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	else{
		cout<<"-1";
	}
}
