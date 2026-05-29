#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> shoes;
    for(int i=0; i<4; i++){
        int curr;
        cin >> curr;
        shoes[curr]++;
    }

    cout<<4 - shoes.size();
    return 0;
}