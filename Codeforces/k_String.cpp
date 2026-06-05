#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int k;
    string str;
    cin >> k >> str;

    string res;
    unordered_map<char, int> freq;
    for(char ch:str){
        freq[ch]++;
    }

    for(auto itr:freq){
        if(itr.second % k != 0){
            cout<<"-1";
            return 0;
        }
        else{
            for(int i=0; i<(itr.second/k); i++){
                res+=itr.first;
            }
        }
    }

    while(k > 0){
        cout<<res;
        k--;
    }

    return 0;
}