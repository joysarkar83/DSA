#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string res;
    int k = 1;
    for(int i=1; i<=n; i=(k * (k+1)) / 2){
        res.push_back(s[i-1]);
        k++;
    }
    cout<<res;

    return 0;
}