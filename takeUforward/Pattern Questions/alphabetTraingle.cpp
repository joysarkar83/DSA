#include <iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i=1; i<=height; i++){
        int alphabet = 65;
        for(int j=1; j<=i; j++){
            cout<<(char)alphabet<<" ";
            alphabet+=1;
        }
        cout<<"\n";
    }
    return 0;
}