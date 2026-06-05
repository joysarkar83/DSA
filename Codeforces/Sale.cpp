#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> tv(n);
    for(int i = 0; i < n; i++){
        cin >> tv[i];
    }
    sort(tv.begin(), tv.end());

    int res = 0;
    
    for(int i = 0; i < m; i++){
        if(tv[i] < 0){
            res += abs(tv[i]);
        } 
        else {
            break; 
        }
    }

    cout << res << "\n";

    return 0;
}