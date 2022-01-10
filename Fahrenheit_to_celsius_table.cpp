#include<iostream>
using namespace std;

int main(){
    int S, E, W;
    cout<<"Enter Starting fahrenheit value = ";
    cin>>S;
    cout<<"Enter Ending fahrenheit value = ";
    cin>>E;
    cout<<"Enter Gap value = ";
    cin>>W;
    cout<<"\n";
    while(S<=E)
    {
        cout<<S<<"\t"<<(5*(S-32)/9)<<endl;
        S += W;
    }
    return 0;
}
