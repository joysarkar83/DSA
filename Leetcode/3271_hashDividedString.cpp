#include <iostream>
#include <vector>
using namespace std;

string stringHash(string& s, int& k) {
    int stIdx = 0, val = 0, k_copy = k, n = s.size();
    string res;
    for(; stIdx<n;){
        val += s[stIdx++] - 'a';
        if(stIdx == k_copy){
            k_copy += k;
            res += 'a' + (val%26);
            val = 0;
        }
    }
    return res;
}

int main(){

    return 0;
}