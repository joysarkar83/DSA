#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    int n = asteroids.size();
    
    stack<int> stk;
    for(int a : asteroids){
        bool alive = true;

        while(!stk.empty() && stk.top()>=0 && a<0){
            if(stk.top() < abs(a)){
                stk.pop();
            }
            else if(stk.top() == abs(a)){
                alive = false;
                stk.pop();
                break;
            }
            else{
                alive = false;
                break;
            }
        }
        if(alive){
            stk.push(a);
        }
    }
    
    vector<int> ans;
    while(!stk.empty()){
        ans.emplace_back(stk.top());
        stk.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){

    return 0;
}