#include <iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i=height; i>0; i--){
        int alphabet = 65;
        for(int j=i; j>0; j--){
            cout<<(char)alphabet<<" ";
            alphabet++;
        }
        cout<<"\n";
    }
    return 0;
}