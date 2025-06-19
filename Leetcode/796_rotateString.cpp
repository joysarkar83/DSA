#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    int n = s.size(), m=goal.size();

    if(n != m){
        return false;
    }

    bool matchFound = false;
    for(int i=0; i<n; i++){  //main string first letter
        for(int j=0; j<m; j++){
            if(s[i] == goal[j] && matchFound == false && i<n){
                matchFound = true;
                i++; j++;
                if(j==m && matchFound == true){
                    j = 0;
                }
            }
            else if(s[i] != goal[j] && matchFound == true && i<n){
                return false;
            }
        }
    }
    return true;
}

int main(){
    string str = "abcde";
    string goal = "cdeab";

    cout<<rotateString(str, goal);

    return 0;
}