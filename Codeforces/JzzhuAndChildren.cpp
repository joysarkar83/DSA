#include <iostream>
#include <deque>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;

    deque<pair<int, int>> wants;
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        wants.emplace_back(i, a);
    }

    while(wants.size() > 1){
        if(wants.front().second > m){
            wants.front().second -= m;
            wants.push_back(wants.front());
        }
        wants.pop_front();
    }

    cout<<wants.front().first;

    return 0;
}