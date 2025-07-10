#include <iostream>
using namespace std;

/*
- Agar last mai 4 bach gaye toh wo jeet jayega (always)

- Toh 4 se divide karke agar remainder 0 aaye toh matlab last 4 elems hai, mai pakka haar jaunga
*/

bool canWinNim(int& n) {
    if(n < 4){
        return true;
    }

    return n%4!=0;
}

int main(){
    int n = 2;

    cout<<canWinNim(n);
    return 0;
}