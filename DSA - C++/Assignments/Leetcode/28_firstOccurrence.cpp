#include <bits/stdc++.h>
using namespace std;

// int strStr(string haystack, string needle){
//     return haystack.find(needle);
// }

int strStr(string haystack, string needle){
    int needleLen = needle.size();
    int haystackLen = haystack.size();
    if(haystackLen >= needleLen){
        for(int i=0; i<=haystackLen-needleLen; i++){
            if(needle == haystack.substr(i, needleLen)){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    cout<<strStr("alienated", "alia");
    return 0;
}