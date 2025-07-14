#include <iostream>
#include <string>
using namespace std;

int balancedStringSplit(string& s) {
    int n = s.size();
    int count = 0;

    for(int i=0; i<n; i++){
        char ch = s[i++];
        string temp = "";           //debug
        temp += ch;                 //debug
        int balance = 1;
        while(balance != 0){
            if(s[i] == ch){
                temp += s[i];                 //debug
                balance++;
            }
            else{
                temp += s[i];                 //debug
                balance--;
            }
            if(balance == 0){
                cout<<temp<<"\n";           //debug
                count++;
                break;
            }
            i++;
        }
    }

    return count;
}

int main(){
    string s = "RLRRRLLRLL";

    cout<<balancedStringSplit(s);

    return 0;
}