#include <iostream>
using namespace std;
int main(){
    int height;
    cout<<"Enter the height: ";
    cin>>height;

    for(int i=1; i<=height; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }


    return 0;
}