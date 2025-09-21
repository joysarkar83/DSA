#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool buddyStrings(string s, string goal) {
    int n = s.size();
    if(n != goal.size()) return false;
    if(s == goal){
        unordered_set<int> temp(s.begin(), s.end());
        return temp.size() < goal.size();
    }
    int left = 0, right = n-1;
    while((left < n) && (s[left] == goal[left])){
        left++;
    }
    while((right >= 0) && (s[right] == goal[right])){
        right--;
    }
    swap(s[left], s[right]);
    return (s == goal);
}

int main(){

    return 0;
}