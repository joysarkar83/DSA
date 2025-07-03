#include <iostream>
#include <vector>
#include <climits>
#include <stack>
using namespace std;

// vector<int> spanFxn(vector<int>& raw){
//     int n = raw.size();
    
//     vector<int> span(n, 0);
//     for(int i=0; i<n; i++){
//         int prevMax = -1;
//         for(int j=0; j<i; j++){
//             if(raw[j]>raw[i]){
//                 prevMax = j;
//             }
//         }
//         span[i] = i - prevMax;
//     }
    
//     return span;
// }


vector<int> spanFxn(vector<int>& raw){
    int n = raw.size();
    vector<int> span(n, 0);
    stack<int> stk;
    
    for(int i=0; i<n; i++){
        while(!stk.empty() && raw[i] >= raw[stk.top()]){
            stk.pop();
        }
        if(!stk.empty() && raw[i] < raw[stk.top()]){
            span[i] = i - stk.top();
            stk.push(i);
        }
        if(stk.empty()){
            span[i] = (i+1);
            stk.push(i);
        }
    }
    return span;
}

int main(){
    vector<int> raw = {10, 4, 5, 90, 120, 80};

    vector<int> span = spanFxn(raw);

    for(int i:span){
        cout<<i<<" ";
    }

}