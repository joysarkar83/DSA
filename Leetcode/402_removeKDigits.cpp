#include <iostream>
#include <string>
#include <stack>
using namespace std;

string removeKdigits(string& num, int k) {
    string res;

    int n = num.size();
    stack<char> track;

    for(int i=0; i<n; i++){
        if(track.empty()){
            track.push(num[i]);
        }
        
        while(!track.empty() && (track.top() >= num[i]) && (k!=0)){
            track.pop();
            k--;
        }
        if(i<n) track.push(num[i++]);
        
        while(i<n && (k==0 || track.top() < num[i])){
            track.push(num[i++]);
        }
    }

    while(!track.empty()){
        cout<<track.top()<<"\n";
        res += track.top();
        track.pop();
    }

    n = res.size();
    for(int i=0; i<n/2; i++){
        swap(res[i], res[n-i-1]);
    }
    return res;
}

int main(){
    string num = "10200";
    int k = 1;

    cout<<removeKdigits(num, k);

    return 0;
}