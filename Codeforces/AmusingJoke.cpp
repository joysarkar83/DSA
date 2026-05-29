#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    unordered_map<char, int> data;

    for(char ch:str1){
        data[ch]++;
    }
    for(char ch:str2){
        data[ch]++;
    }
    for(char ch:str3){
        data[ch]--;
    }

    for(auto itr=data.begin(); itr!=data.end(); itr++){
        if(itr->second != 0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

    return 0;
}