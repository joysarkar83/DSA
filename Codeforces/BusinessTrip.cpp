#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int k;
    cin >> k;

    vector<int> len(12, 0);
    for(int i=0; i<12; i++){
        cin >> len[i];
    }

    sort(len.begin(), len.end(), greater<int>());
    int res = 0;
    for(int i=0; i<12 && k > 0; i++){
        k -= len[i];
        res++;
        if (k <= 0){
            break;
        }
    }
    if(k > 0){
        cout<<"-1";
        return 0;
    }
    cout<<res;

    return 0;
}