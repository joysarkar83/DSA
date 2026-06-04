#include <iostream>
using namespace std;

int main(){
    string str1, str2;
    cin>>str1>>str2;

    int n = str1.size();
    if(str2.size() != n){
        cout<<"NO";
        return 0;
    }

    for(int i=0; i<n; i++){
        if(str1[i] != str2[n-i-1]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}