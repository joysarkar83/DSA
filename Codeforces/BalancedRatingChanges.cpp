#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    vector<int> res;
    bool roundUp = true;

    for(int i=0; i<n; i++){
        int curr = nums[i];
        if(curr % 2 == 0){
            res.emplace_back(curr/2);
        }else {
            if (roundUp) {
                res.push_back((curr + 1) / 2);
            } else {
                res.push_back((curr - 1) / 2);
            }
            roundUp = !roundUp;
        }
        
    }
    for(int& i:res){
        cout << i << "\n";
    }

    return 0;
}