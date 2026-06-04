#include <iostream>
#include <string>
using namespace std;

void allPermutations(string str, string combo){
    int n = str.size();
    if(n == 0){
        cout<<combo<<"\n";
        return;
    }

    // a b c d e
    for(int i = 0; i<n; i++){
        string nextStr = str.substr(0, i) + str.substr(i+1, n-i-1);
        allPermutations(nextStr , combo+str[i]);
    }
}

int main(){
    string str = "abc", combo = "";

    allPermutations(str, combo);

    return 0;
}