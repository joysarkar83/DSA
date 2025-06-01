#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    unsigned int max_val = 2147483648;
    unsigned long long int num = 0;
    bool isNegative = false;
    bool numStarted = false;
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' ' && numStarted == false){
            continue;
        }
        else if(s[i] == '-' && numStarted == false){
            isNegative = true;
            numStarted = true;
        }
        else if(s[i] == '+' && numStarted == false){
            isNegative = false;
            numStarted = true;
        }
        else if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9'){
            num = num*10 + (s[i]-'0');
            numStarted = true;
            if(isNegative == true && num>max_val){
                return (-1)*max_val;
            }
            else if(isNegative == false && num>max_val-1){
                return max_val-1;
            }
        }
        else if((s[i] == ' ' || s[i] == '-' || s[i] == '+') && numStarted == true){
            break;
        }
        else{
            break;
        }
    }
    if(isNegative == true && num>max_val){
        return (-1)*max_val;
    }
    else if(isNegative == true && num<max_val){
        return (-1)*num;
    }
    else if(isNegative == false && num>max_val-1){
        return max_val-1;
    }
    else{
        return num;
    }
}

int main(){

    cout<<myAtoi("18446744073709551617");
    return 0;
}