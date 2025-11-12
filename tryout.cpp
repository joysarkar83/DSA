#include <iostream>
#include <vector>
using namespace std;

// void bubbleSort(vector<int>& nums){
//     int n = nums.size();
//     bool reqSort = false;
//     for(int i=0; i<n-1; i++){
//         for(int j=1; j<n-i; j++){
//             if(nums[j] < nums[j-1]){
//                 swap(nums[j], nums[j-1]);
//                 reqSort = true;
//             }
//         }
//         if(!reqSort){
//             break;
//         }
//     }
// }

// void selectionSort(vector<int>& nums){
//     int n = nums.size();
//     for(int i=0; i<n-1; i++){
//         int currMin = i;
//         for(int j=i+1; j<n; j++){
//             if(nums[j] < nums[currMin]){
//                 currMin = j;
//             }
//         }
//         swap(nums[i], nums[currMin]);
//     }
// }

// void insertionSort(vector<int>& nums){
//     int n = nums.size();
//     for(int i=1; i<n; i++){
//         for(int j=i; j>0; j--){
//             if(nums[j-1] > nums[j]){
//                 swap(nums[j-1], nums[j]);
//             }
//             else{
//                 break;
//             }
//         }
//     }
// }

// void bubbleSort(vector<int>& nums){
//     int n = nums.size();
//     bool reqSorting = false;
//     for(int i=0; i<n-1; i++){
//         for(int j=1; j<n-i; j++){
//             if(nums[j-1] > nums[j]){
//                 swap(nums[j-1], nums[j]);
//                 reqSorting = true;
//             }
//         }
//         if(!reqSorting){
//             break;
//         }
//     }
// }

// void selectionSort(vector<int>& nums){
//     int n = nums.size();
//     for(int i=0; i<n-1; i++){
//         int minIdx = i;
//         for(int j=i+1; j<n; j++){
//             if(nums[j] < nums[minIdx]){
//                 minIdx = j;
//             }
//         }
//         swap(nums[i], nums[minIdx]);
//     }
// }

void insertionSort(vector<int>& nums){
    int n = nums.size();
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(nums[j] < nums[j-1]){
                swap(nums[j], nums[j-1]);
            }
        }
    }
}

int main(){
    vector<int> nums = {9,8,7,6,5,4,3,2,1};
    insertionSort(nums);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\n";

    return 0;
}