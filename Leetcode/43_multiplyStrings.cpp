#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string addStrings(string& str1, string& str2){
    int idx1 = str1.size()-1, idx2 = str2.size()-1;
    int carry = 0;
    string res = "";

    while(idx1 >= 0 && idx2 >= 0){
        int currProd = str1[idx1] - '0' + str2[idx2] - '0' + carry;
        res += currProd % 10 + '0';
        carry = currProd / 10;
        idx1--; idx2--;
    }

    while(idx1 >= 0){
        int currProd = str1[idx1] - '0' + carry;
        res += currProd % 10 + '0';
        carry = currProd / 10;
        idx1--;
    }
    
    while(idx2 >= 0){
        int currProd = str2[idx2] - '0' + carry;
        res += currProd % 10 + '0';
        carry = currProd / 10;
        idx2--;
    }
    
    if(carry > 0) res+=carry + '0';
    
    reverse(res.begin(), res.end());
    return res;
}

string multiply(string num1, string num2) {
    if(num1=="0" || num2 == "0") return "0";
    int idx1 = num1.size()-1, idx2;
    vector<string> individualProducts;

    //Prepare the vector
    string multiplier = "";

    for(idx1; idx1>=0; idx1--){
        int carry = 0;
        string product = "";

        idx2 = num2.size()-1;
        int currNum = num1[idx1] - '0';
        for(idx2; idx2>=0; idx2--){
            int currProd = currNum * (num2[idx2] - '0') + carry;
            carry = currProd / 10;
            product += (currProd % 10) + '0';
        }
    
        if(carry > 0) product+=(carry + '0');

        reverse(product.begin(), product.end());
        product+=multiplier;
        individualProducts.emplace_back(product);
        multiplier+='0';
    }

    string ans = "0";
    for(string str : individualProducts){
        ans = addStrings(ans, str);
    }

    return ans;
}

int main(){
    cout<<multiply("32", "22");

    return 0;
}