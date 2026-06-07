#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();

    for(int i=0; i<n; i++){
        char ch = tolower(str[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y'){
            continue;
        }else{
            cout<<'.'<<ch;
        }
    }

    return 0;
}