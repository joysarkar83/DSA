#include <iostream>
#include <string>
using namespace std;

char shift(char& c, int k){
    return (c + k);
}

string replaceDigits(string& s) {
    int n = s.size();
    for(int i=0; i<n; i+=2){
        char curr = s[i];

        if((i+1) < n)
        s[i+1] = shift(curr, s[i+1]-'0');
    }
    return s;
}

int main(){
    // cout<<shift('a', 3);

    return 0;
}