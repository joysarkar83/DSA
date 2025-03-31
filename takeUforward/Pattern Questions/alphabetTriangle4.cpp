#include <iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i=1; i<=height; i++){
        for(int j=height-i; j>0; j--){
            cout<<"  ";
        }

        int alphabet = 65;
        for(int j=1; j<i+1; j++){
            cout<<(char)(alphabet++)<<" ";
        }

        alphabet-=1;
        for(int j=1; j<i; j++){
            alphabet-=1;
            cout<<(char)(alphabet)<<" ";
        }

        cout<<"\n";
    }

    return 0;
}