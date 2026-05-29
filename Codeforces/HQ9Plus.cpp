#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;

    for(char ch: str){
        if(ch == 'H' || ch == 'Q' || ch == '9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}