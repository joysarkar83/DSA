#include <iostream>
#include <string>
using namespace std;

bool hasSameDigits(string s) {
    while(s.size()>2){
        string newString = "";
        for(int i=0; i<s.size()-1; i++){
            newString.push_back((s[i]+s[i+1])%10);
        }
        s = newString;
    }
    if(s[0] == s[1]){
        return true;
    }
    return false;
}

int main(){
    string str = "34789";

    cout<<hasSameDigits(str);

    return 0;
}