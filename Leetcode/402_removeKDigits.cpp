#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string removeKdigits(string num, int k) {
    stack<char> track;

    //Adding elements in the array
    for (char digit : num) {
        while (!track.empty() && k > 0 && track.top() > digit) {
            track.pop();
            k--;
        }
        track.push(digit);
    }

    //Removing k elements from the end
    while (k > 0 && !track.empty()) {
        track.pop();
        k--;
    }

    //Building the string
    string res;
    while (!track.empty()) {
        res += track.top();
        track.pop();
    }
    reverse(res.begin(), res.end());

    //Removing initial zeroes if any
    int pos = 0;
    while (pos < res.size() && res[pos] == '0') pos++;
    res = res.substr(pos);

    return res.empty() ? "0" : res;
}


int main(){
    string num = "1432219";
    int k = 3;

    cout<<removeKdigits(num, k);

    return 0;
}