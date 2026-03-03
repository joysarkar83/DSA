#include <iostream>
#include <algorithm>
using namespace std;

char findKthBit(int n, int k) {
    string str = "0";
    for(int i=1; i<n; i++){
        string inv;
        for(char ch:str){
            if(ch == '0'){
                inv.push_back('1');
            }
            else{
                inv.push_back('0');
            }
        }

        str+='1';
        reverse(inv.begin(), inv.end());
        str+=inv;
    }
    cout<<str;
    return str[k-1];
}

int main(){

    return 0;
}