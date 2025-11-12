#include <iostream>
#include <algorithm>
using namespace std;

string convertToBase7(int num) {
    string res;
    bool nega = false;
    if (num < 0)
        nega = true;
    num = abs(num);
    while (num >= 7) {
        res += to_string(num % 7);
        num /= 7;
    }
    res += to_string(num);
    reverse(res.begin(), res.end());
    if (nega)
        res = '-' + res;
    return res;
}

int main(){

    return 0;
}