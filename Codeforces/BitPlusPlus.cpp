#include <iostream>
using namespace std;
int main(){
    int n, res = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        string str;
        cin >> str;

        for(char ch:str){
            if(ch == '+'){
                res++;
                break;
            }else if(ch == '-'){
                res--;
                break;
            }
        }
    }
    cout<<res;

    return 0;
}