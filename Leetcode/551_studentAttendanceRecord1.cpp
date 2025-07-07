#include <iostream>
#include <string>
using namespace std;

bool checkRecord(string& s) {
    int n = s.size();

    int countA = 0;

    for(int i=0; i<n; i++){
        if(s[i] == 'A') countA++;
        if(i+2<n && s[i] == 'L' && s[i+1] == 'L' && s[i+2] == 'L') return false;
    }
    return (countA < 2);
}

int main(){
    string s = "ALLAPPL";

    cout<<checkRecord(s);

    return 0;
}