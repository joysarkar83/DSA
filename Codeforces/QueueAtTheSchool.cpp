#include <iostream>
using namespace std;
int main (){
    int n, t;
    string str, laststr;
    cin>>n>>t>>str;

    while(t>0){
        if(laststr == str){
            break;
        }
        laststr = str;
        for(int i=0; i<n-1; i++){
            if(str[i] == 'B' && str[i+1] == 'G'){
                swap(str[i], str[i+1]);
                i++;
            }
        }
        t--;
    }
    cout<<str;

    return 0;
}