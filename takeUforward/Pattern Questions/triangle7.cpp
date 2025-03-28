#include <iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter height: ";
    cin>>height;
    
    int space_counter = 0;
    for(int k=height; k>0; k--){
        for(int space=space_counter; space>0; space--){
            cout<<" ";
        }
        space_counter+=1;

        for(int stars=1; stars<=(2*k)-1; stars++){
            cout<<"*";
        }        
        cout<<"\n";
    }

    return 0;
}