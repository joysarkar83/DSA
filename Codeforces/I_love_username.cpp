#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int maxVal, minVal, res = 0;
    cin>>maxVal;
    minVal = maxVal;

    for(int i=1; i<n; i++){
        int currVal;
        cin >> currVal;

        if(currVal > maxVal){
            res++;
            maxVal = currVal;
        }else if(currVal < minVal){
            res++;
            minVal = currVal;
        }
    }
    cout<<res;

    return 0;
}