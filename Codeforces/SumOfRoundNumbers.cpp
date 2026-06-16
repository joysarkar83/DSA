#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> res;
    int m = 1;

    while(n > 0){
        int rem = (n%10);
        if(rem != 0){
            res.emplace_back(rem * m);
        }
        m *= 10;
        n /= 10;
    }

    cout<<res.size()<<"\n";
    for(int& i:res){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}