#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> num){
    int ans = 0;
    for(int i=0; i<num.size(); i++){
        ans = ans ^ num[i];
    }
    return ans;
}

int main(){
    vector<int> num = {3,2,1,3,2};

    cout<<singleNumber(num);

    return 0;
}