#include <iostream>
using namespace std;

void solve(){
    string s;
    cin >> s;

    int n = s.size(), res = 0, st = -1, end = -1;

    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            st = i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(s[i] == '1'){
            end = i;
            break;
        }
    }
    
    for(int i=st; i<end; i++){
        if(s[i] == '0'){
            res++;
        }
    }
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