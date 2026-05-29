#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string str;
    cin>>str;
    unordered_set<char> uniq;

    for(char ch:str){
        uniq.emplace(ch);
    }

    uniq.size()%2 == 1 ? cout<<"IGNORE HIM!" : cout<<"CHAT WITH HER!";
    return 0;
}