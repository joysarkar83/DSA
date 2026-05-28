#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;

    int space = 0, curr = 0;
    while(n){
        int exit, enter;
        cin>>exit>>enter;

        curr-=exit;
        curr+=enter;

        space = max(space, curr);

        n--;
    }
    cout<<space;

    return 0;
}