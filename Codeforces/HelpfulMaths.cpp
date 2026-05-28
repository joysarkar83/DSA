#include <iostream>
#include <vector>
using namespace std;
int main(){
    string str;
    cin>>str;

    int ones = 0, twos = 0, threes = 0;

    for(char ch:str){
        if(ch == '+'){
            continue;
        }
        else{
            if(ch == '1') ones++;
            if(ch == '2') twos++;
            if(ch == '3') threes++;
        }
    }

    string res;
    while(ones){
        res += "1+";
        ones--;
    }
    while(twos){
        res += "2+";
        twos--;
    }
    while(threes){
        res += "3+";
        threes--;
    }
    res.pop_back();
    cout<<res;

    return 0;
}