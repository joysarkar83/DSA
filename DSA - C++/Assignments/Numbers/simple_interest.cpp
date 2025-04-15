#include <iostream>
using namespace std;
int main(){
    float principle, rate, time, si;
    cout<<"Enter principle: ";
    cin>>principle;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter time: ";
    cin>>time;

    si = (principle * rate * time)/100;
    cout<<"Simple Interest: "<<si<<"\n";
    cout<<"Amount: "<<principle + si;
    
    return 0;
}