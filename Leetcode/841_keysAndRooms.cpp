#include <iostream>
#include <vector>
#include <unordered_set>
#include <stack>
using namespace std;

bool canVisitAllRooms(vector<vector<int>>& rooms) {
    int n = rooms.size();
    unordered_set<int> unlocked;
    stack<int> to_check;

    unlocked.emplace(0);
    to_check.push(0);

    while(!to_check.empty()){
        int curr = to_check.top();
        to_check.pop();

        for(int& key:rooms[curr]){
            if(unlocked.count(key) == 0){
                unlocked.emplace(key);
                to_check.push(key);
            }
        }
    }

    return (unlocked.size() == n);
}

int main(){
    return 0;
}