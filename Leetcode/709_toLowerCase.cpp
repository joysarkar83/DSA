#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string& s) {
    int n = s.size();
    for(int i=0; i<n; i++){
        if((s[i]>='A') && (s[i]<='Z')){
            s[i] += 32;
        }
    }
    return s;
}

// string toLowerCase(string& s) {
//     int n = s.size();
//     for(int i=0; i<n; i++){
//         s[i] = tolower(s[i]);
//     }
//     return s;
// }

int main(){
    string s = "RaNdOm";

    cout<<toLowerCase(s);

    return 0;
}