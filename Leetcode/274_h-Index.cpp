#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int hIndex(vector<int>& citations) {
    int n = citations.size();
    sort(citations.begin(), citations.end(), greater<int>());

    int h = 0;
    for(int i = 0; i < n; i++) {
        if(citations[i] >= i + 1) {
            h = i + 1;
        } else {
            break;
        }
    }
    return h;
}


int main(){

    return 0;
}