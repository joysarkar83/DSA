#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(long long unsigned int a) {
    string str1 = to_string(a);
    string str2 = str1;
    reverse(str2.begin(), str2.end());
    return str1 == str2;
}

void solve(){
    long long unsigned int n;
    cin >> n;

    if(checkPalindrome(n)){
        cout<<n<<" "<<0<<"\n";
        return;
    }

    for (long long unsigned int a = 0; a <= n; a++) {
        if (checkPalindrome(a) && ((n - a) % 12 == 0)) {
            cout << a << " " << (n - a) << "\n";
            return;
        }
    }
    cout<<-1<<"\n";
}

int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }

    return 0;
}