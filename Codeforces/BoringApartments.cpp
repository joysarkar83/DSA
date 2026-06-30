#include <iostream>
using namespace std;

void solve(){
    string s;
    cin >> s;

    int res = 0;
    int n = s[0] - '0';
    for(int i=1; i<n; i++){
        res += 10;
    }

    res += (s.size() * (s.size() + 1)) / 2;
    cout<<res<<"\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}