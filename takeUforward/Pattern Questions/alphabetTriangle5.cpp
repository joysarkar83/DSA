#include <iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter height: ";
    cin>>height;

    for(int i=0; i<height; i++){
        int alphabet=65+height;
        for(int j=i; j>=0; j--){
            cout<<(char)(alphabet-=1)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}