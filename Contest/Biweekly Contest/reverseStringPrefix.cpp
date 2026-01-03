#include <iostream>
#include <algorithm>
using namespace std;

string reversePrefix(string& s, int& k) {
    reverse(s.begin(), s.begin()+k);
    return s;
}

int main(){

    return 0;
}