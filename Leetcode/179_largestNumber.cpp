#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool comp(string& s1, string& s2) {
    return s1 + s2 > s2 + s1;
}

string largestNumber(vector<int>& nums) {
    vector<string> strNums;
    for (int num : nums) {
        strNums.push_back(to_string(num));
    }

    sort(strNums.begin(), strNums.end(), comp);

    // Handle case like [0,0] => "0" instead of "00"
    if (strNums[0] == "0") return "0";

    string result;
    for (string& s : strNums) {
        result += s;
    }
    return result;
}


int main(){
    vector<int> nums = {3,30,34,5,9};

    cout<<largestNumber(nums);

    return 0;
}