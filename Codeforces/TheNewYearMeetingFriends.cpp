#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> addr(3);
    cin >> addr[0] >> addr[1] >> addr[2];
    sort(addr.begin(), addr.end());
    cout<<addr[2] - addr[0];
    return 0;
}