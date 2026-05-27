#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin >> n;

    long long int cnt = 0;

    while(n>0){
        int rem = n%10;
        if(rem == 4 || rem == 7){
            cnt++;
        }
        n/=10;
    }

    if(cnt == 4 || cnt == 7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}