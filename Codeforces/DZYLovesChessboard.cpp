#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nrows, ncols;
    cin >> nrows >> ncols;

    for(int r=0; r<nrows; r++){
        for(int c=0; c<ncols; c++){
            char curr;
            cin >> curr;
            if(curr == '.'){
                if((r + c)%2 == 0){
                    cout<<'B';
                }else{
                    cout<<'W';
                }
            }else{
                cout<<curr;
            }
        }
        cout<<"\n";
    }

    return 0;
}