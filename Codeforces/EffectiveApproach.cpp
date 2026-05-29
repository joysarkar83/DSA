#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_map<int, int> idx;
    for(int i=1; i<=n; i++){
        int num;
        cin >> num;
        idx[num] = i;
    }
    
    int m;
    cin >> m;
    vector<int> toSearch(m, -1);
    for(int i=0; i<m; i++){
        cin>>toSearch[i];
    }

    long long int V = 0, P = 0;
    for(int& i:toSearch){
        V += idx[i];
        P += n - idx[i] + 1;
    }

    cout<<V<<" "<<P;

    return 0;
}