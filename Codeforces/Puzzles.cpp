#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> puzz(m);
    for(int i=0; i<m; i++){
        cin >> puzz[i];
    }
    sort(puzz.begin(), puzz.end());

    int res = INT_MAX;
    for(int i=0; i<=m-n; i++){
        int minVal = puzz[i], maxVal = puzz[i+n-1];
        res = min(res, maxVal - minVal);
    }
    cout<<res;

    return 0;
}