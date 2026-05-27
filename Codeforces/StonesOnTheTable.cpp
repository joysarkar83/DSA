#include <iostream>
using namespace std;
int main(){
    int n, res = 0;
    string str;
    cin>>n>>str;

    char prev = str[0];

    for(int i=1; i<n; i++){
        if(prev == str[i]){
            res++;
        }
        prev = str[i];
    }
    cout<<res;
    
    return 0;
}