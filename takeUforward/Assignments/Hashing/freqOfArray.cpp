#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,3,5,6,3,1,5,7};
    int max = arr[0];

    for(int i=1; i<arr.size(); i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    vector<int> freq(max+1, 0);

    for(int i=0; i<arr.size(); i++){
        freq[arr[i]]++;
    }

    cout<<freq[7];

    return 0;
}