#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    string target = "hello";
    int k = 0;

    for(char ch:s){
        if(ch == target[k]){
            k++;
            if(k == 5){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}