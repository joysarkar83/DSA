#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> tasks(m+1, -1);
    for(int i=1; i<=m; i++){
        cin >> tasks[i];
    }

    long long unsigned int res = 0;
    int currPos = 1;
    for(int i=1; i<=m; i++){
        if(currPos <= tasks[i]){
            res += tasks[i] - currPos;
        }else{
            res += n - currPos + tasks[i];
        }
        currPos = tasks[i];
    }
    cout<<res;

    return 0;
}