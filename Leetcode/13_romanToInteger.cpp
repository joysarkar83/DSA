#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string s){
    unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    
    int ans = 0, prevVal = 0;

    for (int i = s.size()-1; i>=0; i--){
        int currVal = roman[s[i]];
        if(currVal < prevVal){
            ans -= currVal;
        }
        else{
            ans += currVal;
        }
        prevVal = currVal;
    }
    return ans;
}

int main(){
    string test = "alpha";
    cout<<test.size();

    return 0;
}