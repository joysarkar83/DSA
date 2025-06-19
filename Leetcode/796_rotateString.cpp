#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool rotateString(string& s, string goal) {
    int n = s.size();

    if(n != goal.size()){
        return false;
    }

    for(int i=0; i<n; i++){
        s.insert(s.begin(), s.back());
        s.pop_back();
        if(s == goal){
            return true;
        }
    }
    return false;
}

int main(){
    string str = "gcmbf";
    string goal = "fgcmb";

    cout<<rotateString(str, goal);

    return 0;
}