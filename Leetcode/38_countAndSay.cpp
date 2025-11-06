#include <iostream>
using namespace std;

void countAndSayHelper(string& str){
    int n = str.size();
    string newStr = "";
    int i=0;
    while(i<n){
        char curr = str[i];
        int count = 0;
        while(i<n && str[i] == curr){
            count++;
            i++;
        }
        newStr += to_string(count) + curr;
    }
    str = newStr;
}

string countAndSay(int n) {
    string str = "1";
    int cnt = 1;
    while(cnt < n){
        countAndSayHelper(str);
        cnt++;
    }
    return str;
}

int main(){
    cout<<countAndSay(4);
    return 0;
}