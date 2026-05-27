#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> res(5, vector<int>(5,1)), press(3, vector<int>(3,0));

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>press[i][j];
        }
    }
    
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){

            if(press[i-1][j-1] % 2 != 0){

                res[i][j] ^= 1;

                res[i-1][j] ^= 1;
                res[i+1][j] ^= 1;

                res[i][j-1] ^= 1;
                res[i][j+1] ^= 1;
            }
        }
    }

    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            cout<<res[i][j];
        }
        cout<<"\n";
    }

    return 0;
}