#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Print table of: ";
    cin>>num;

    for(int i = 1 ; i<=10 ; i++){
        cout<<num<<" x "<<i<<" = "<<(num*i)<<"\n";
    }
    return 0;
}