#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> seq;
    cin>>n;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        seq.emplace_back(num);
    }

    pair<int, int> maxVal = {INT_MIN, -1}, minVal = {INT_MAX, -1};

    for(int i=0; i<n; i++){
        if(seq[i] > maxVal.first){
            maxVal = {seq[i], i};
        }
        if(seq[i] <= minVal.first){
            minVal = {seq[i], i};
        }
    }

    if(maxVal.second < minVal.second){
        cout<<maxVal.second + abs(n - minVal.second) - 1;
    }else{
        cout<<maxVal.second + abs(n - minVal.second) - 2;
    }

    return 0;
}