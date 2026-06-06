#include <iostream>
using namespace std;


int main(){
    string str;
    cin >> str;

    char curr;
    int count = 0;

    for(char ch:str){
        if(curr == ch){
            count++;
        }else{
            curr = ch;
            count = 1;
        }
        
        if(count == 7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}