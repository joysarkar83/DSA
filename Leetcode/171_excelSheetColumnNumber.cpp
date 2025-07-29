#include <iostream>
#include <string>
using namespace std;

//Optimised
int titleToNumber(string& columnTitle) {
    int n = columnTitle.size()-1;
    int ans = 0;

    for(char i:columnTitle){
        long long int curr = i - 'A' + 1;
        ans = ans * 26 + curr;
    }
    return ans;
}

//My version
// int titleToNumber(string& columnTitle) {
//     int n = columnTitle.size()-1;
//     long long int ans = 0;

//     for(int i=n; i>=0; i--){
//         int nTimes = i;
//         long long int curr = columnTitle[n-i] - 'A' + 1;
//         while(nTimes != 0){
//             curr *= 26;
//             nTimes--;
//         }
//         ans+=curr;
//     }
//     return ans;
// }

int main(){
    string word = "ZY";

    cout<<titleToNumber(word);

    return 0;
}