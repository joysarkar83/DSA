#include <iostream>
#include <vector>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int val;
            cin >> val;

            if(val){
                cout<<abs(i-2)+abs(j-2);
                return 0;
            }
        }
    }
    return 0;
}