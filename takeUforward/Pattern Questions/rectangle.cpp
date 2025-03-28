#include <iostream>
using namespace std;
int main(){
    int len, bre;
    cout<<"Enter length and breadth: ";
    cin>>len>>bre;
    for(int i=1; i<=len; i++){
        for(int j=1; j<=bre; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}