#include <iostream>
#include <vector>
using namespace std;

int xorBeauty(vector<int> num){
    int ans = num[0];
    for(int i=1; i<num.size(); i++){
        ans = ans ^ num[i];
    }
    return ans;
}

int main(){
    vector<int> num = {15,45,20,2,34,35,5,44,32,30};

    cout<<xorBeauty(num);

    return 0;
}