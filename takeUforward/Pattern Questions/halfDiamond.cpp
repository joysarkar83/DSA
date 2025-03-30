#include <iostream>
using namespace std;
int main(){
    int maxLen, height;
    cout<<"Enter the max length: ";
    cin>>maxLen;
    height = (2*maxLen)-1;

    for(int i=1; i<=height; i++){
        if(i<=maxLen){
            for(int j=i; j>0; j--){
                cout<<"*";
            }
            cout<<"\n";
        }
        else{
            for(int j=height-i+1; j>0; j--){
                cout<<"*";
            }
            cout<<"\n";
        }
    }


    return 0;
}