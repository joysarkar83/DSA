#include <iostream>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int maxVal = INT_MIN, minVal = INT_MAX;
    for(int i=0; i<n; i++){
        int curr;
        cin>>curr;
        maxVal = max(curr, maxVal);
        minVal = min(curr, minVal);
    }
    cout<<maxVal+1-minVal<<"\n";
}

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        solve();
    }

    return 0;
}