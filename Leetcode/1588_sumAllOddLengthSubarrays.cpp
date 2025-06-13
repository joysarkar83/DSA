#include <iostream>
#include <vector>
using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int sum = 0, n = arr.size();
    for(int firstPtr = 0; firstPtr<n; firstPtr++){
        for(int secondPtr = 0; secondPtr<n; secondPtr++){
            vector<int> temp;
            temp.emplace_back(secondPtr);
            int tempSize = temp.size();
            if(tempSize % 2 == 1){
                for(int i = 0; i<tempSize; i++){
                    sum+=temp[i];
                }
            }
        }
    }
    return sum;
}

int main(){
    vector<int> arr = {1,4,2,5,3};
    cout<<sumOddLengthSubarrays(arr);

    return 0;
}