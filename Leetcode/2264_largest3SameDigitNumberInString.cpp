#include <iostream>
#include <string>
#include <climits>
using namespace std;

string largestGoodInteger(string& num) {
    int n = num.size();
    if(n<3) return "";

    int ans = INT_MIN;
    bool found = false;

    for(int i=2; i<n; i++){
        int curr = num[i];
        if((num[i-1] == curr) && (num[i-2] == curr)){
            ans = max(ans, curr-'0');
            found = true;
        }
    }

    num.clear();
    if(!found) return num;

    int curr = ('0' + ans);
    num.push_back(curr);
    num.push_back(curr);
    num.push_back(curr);
    return num;
}


int main(){


    return 0;
}