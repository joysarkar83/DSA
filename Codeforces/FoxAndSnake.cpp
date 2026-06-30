#include <iostream>
using namespace std;
int main(){
    int nR, nC;
    cin >> nR >> nC;

    bool rt = true;

    for(int r=1; r<=nR; r++){
        if(r % 2 == 1){
            for(int c=1; c<=nC; c++){
                cout<<"#";
            }
        }else{
            if(rt == true){
                for(int c=1; c<nC; c++){
                    cout<<".";
                }
                cout<<"#";
                rt = false;
            }else{
                cout<<"#";
                for(int c=1; c<nC; c++){
                    cout<<".";
                }
                rt = true;
            }

        }
        cout<<"\n";
    }


    return 0;
}