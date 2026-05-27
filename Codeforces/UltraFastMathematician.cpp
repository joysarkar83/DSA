#include <iostream>
using namespace std;
int main(){
    string str1, str2, res;
    cin>>str1>>str2;

    int n = str1.size();

    for(int i=0; i<n; i++){
        res.push_back(str1[i] == str2[i] ? '0' : '1');
    }
    cout<<res;

    return 0;
}