#include <iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    int alphabet = 65;
    for(int i=1; i<=height; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)alphabet<<" ";
        }
        alphabet+=1;
        cout<<"\n";
    }
    return 0;
}