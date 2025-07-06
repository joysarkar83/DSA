#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addStrings(string num1, string num2) {
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int carry = 0;
    string ans = "";

    while (i >= 0 || j >= 0 || carry > 0) {
        int n1 = 0;
        if (i >= 0) {
            n1 = num1[i] - '0';
            i--;
        }

        int n2 = 0;
        if (j >= 0) {
            n2 = num2[j] - '0';
            j--;
        }

        int sum = n1 + n2 + carry;
        ans.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}


int main(){
    string s1 = "12345";
    string s2 = "5432";

    cout<<addStrings(s1, s2);

    return 0;
}