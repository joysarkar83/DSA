#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int left1 = 0, right1 = 0;

    for(int i=0; i<n; i++){
        int left, right;
        cin>>left>>right;

        if(left == 1){
            left1++;
        }
        if(right == 1){
            right1++;
        }
    }

    cout<<min(left1, n-left1) + min(right1, n-right1);

    return 0;
}