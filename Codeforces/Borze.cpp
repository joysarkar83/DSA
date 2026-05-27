#include <iostream>
using namespace std;
int main(){
    string q, res, buffer;
    cin >> q;

    for(char ch:q){
        if(buffer == ""){
            if(ch == '.'){
                res += '0';
                continue;
            }
            else{
                buffer += ch;
            }
        }
        else{
            buffer += ch;
            if(buffer == "-."){
                res+='1';
            }
            else{
                res+='2';
            }
            buffer.clear();
        }
    }
    cout<<res;
    return 0;
}