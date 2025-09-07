#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string intToRoman(int num) {
    int multiplier = 1;
    string ans = "";

    vector<pair<int, string>> data = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, 
    {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    int n = data.size();

    for(auto &ptr:data){
        while(num >= ptr.first){
            ans += ptr.second;
            num -= ptr.first;
        }
    }
    return ans;
}

int main(){

    return 0;
}