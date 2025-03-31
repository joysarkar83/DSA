#include <iostream>
using namespace std;
int main(){
    int halfHeight;
    cout<<"Enter half-height: ";
    cin>>halfHeight;

    for(int i=0; i<halfHeight; i++){
        for(int j=i; j<halfHeight; j++){
            cout<<"* ";
        }
        
        for(int j=i; j<i*2; j++){
            cout<<"    ";
        }
        
        for(int j=i; j<halfHeight; j++){
            cout<<"* ";
        }
        
        cout<<"\n";
    }
    for(int i=halfHeight; i>0; i--){
        for(int j=halfHeight-i+1; j>0; j--){
            cout<<"* ";
        }

        for(int j=i+1; j<i*2; j++){
            cout<<"    ";
        }
        
        for(int j=halfHeight-i+1; j>0; j--){
            cout<<"* ";
        }
        
        cout<<"\n";
    }
    return 0;
}