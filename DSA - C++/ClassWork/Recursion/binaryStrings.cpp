#include <iostream>
#include <string>
using namespace std;

void binaryStrings(int n, string finalStr, int lastUsed){

    if(n==0){
        cout<<finalStr<<"\n";
        return;
    }

    if(lastUsed == 0){
        binaryStrings(n-1, finalStr+"0", 0);
        binaryStrings(n-1, finalStr+"1", 1);
    }else{
        binaryStrings(n-1, finalStr+"0", 0);
    }

}

int main(){
    string str = "";

    binaryStrings(4, str, 0);

    return 0;
}