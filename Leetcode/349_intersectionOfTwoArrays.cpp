#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>& vect){
    for(int i:vect){
        cout<<i<<" ";
    }
    cout<<"\n";
}

//Slightly optimised
void uniqueOnly(vector<int>& vect){
    int n = vect.size();
    sort(vect.begin(), vect.end());
    for(int i=1; i<n; i++){
        if(vect[i] == vect[i-1]){
            vect.erase(vect.begin()+i);
            i--; n--;
        }
    }
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    uniqueOnly(nums1);
    uniqueOnly(nums2);
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int n1 = nums1.size(), n2 = nums2.size();
    
    vector<int> res;
    int lastIndex = 0;
    
    for(int i=0; i<n1; i++){
        for(int j=lastIndex; j<n2; j++){
            if(nums1[i] == nums2[j]){
                res.emplace_back(nums1[i]);
                lastIndex = j;
                break;
            }
            else if(nums1[i] > nums2[j]){
                // break;
            }
        }
    }
    return res;
}


//Brute Force
// void uniqueOnly(vector<int>& vect){
//     int n = vect.size();
//     sort(vect.begin(), vect.end());
//     for(int i=1; i<n; i++){
//         if(vect[i] == vect[i-1]){
//             vect.erase(vect.begin()+i);
//             i--; n--;
//         }
//     }
// }

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//     vector<int> res;
//     for(int i=0; i<nums1.size(); i++){
//         for(int j=0; j<nums2.size(); j++){
//             if(nums1[i] == nums2[j]){
//                 res.emplace_back(nums1[i]);
//                 nums2[j] = -1;
//                 break;
//             }
//         }
//     }
//     uniqueOnly(res);
//     return res;
// }

int main(){
    vector<int> nums1 = {4,9,9,9,9,9,5};
    vector<int> nums2 = {9,4,9,8,4};

    vector<int> res = intersection(nums1, nums2);

    printVector(res);

    return 0;
}