#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;

    vector<int> ones(k, 0);
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones[i % k]++;
        }
    }
    
    for (int count:ones) {
        if (count % 2 != 0) {
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main(){
    int t = 0;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}