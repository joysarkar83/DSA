#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    if(m % n != 0){
        cout << -1;
        return 0;
    }

    int ratio = m / n;
    int res = 0;
    while(ratio != 1){
        if(ratio % 2 == 0){
            ratio /= 2;
        }else if(ratio % 3 == 0){
            ratio /= 3;
        }else{
            break;
        }
        res++;
    }
    if(ratio == 1){
        cout<<res;
    }else{
        cout<<-1;
    }

    return 0;
}