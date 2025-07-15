#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string getSmallestString(int n, int k) {        // n->no. of characters, k->sum
    string ans(n, 'a');
    k-=n;

    int idx = n-1;
    while(k != 0){
        char curr = min(25+'a', k+'a');
        ans[idx] = curr;
        k -= curr - 'a';
        idx--;
    }
    return ans;
}

int main(){
    int n = 3, k = 27;

    cout<<getSmallestString(n, k);

    return 0;
}