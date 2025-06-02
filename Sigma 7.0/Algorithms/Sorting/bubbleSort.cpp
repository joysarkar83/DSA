//https://wbd.ms/share/v2/aHR0cHM6Ly93aGl0ZWJvYXJkLm1pY3Jvc29mdC5jb20vYXBpL3YxLjAvd2hpdGVib2FyZHMvcmVkZWVtLzhiZjcxNWNiMDRiYzRhM2JhZDIxZWI3M2EwYTFmM2YxX0JCQTcxNzYyLTEyRTAtNDJFMS1CMzI0LTVCMTMxRjQyNEUzRF9hNDg4MDZjMC1jZTE3LTRiNzEtOTBlMi02NjI2MDAzYThjOWI=

#include <iostream>
#include <vector>
using namespace std;

//Pushes the max element towards the end

void bubbleSortAscending(vector<int> &nums){
    int n=nums.size();
    for(int i=0; i<n-1; i++){                   //Will run through all element except the last one, coz it is obviously the max if the rest of the array is sorted
        bool requiresSorting = false;           //To optimize the code i.e. if in 1st cycle it doesn't make any changes then it won't run for any further cycle
        for(int j=0; j<n-1-i; j++){             //Keeps reducing the no. of turns since the max values are already at the end
            if(nums[j]>nums[j+1]){              //Current value is greater than the next value 
                swap(nums[j], nums[j+1]);
                requiresSorting = true;
            }
        }
        if (!requiresSorting){
            break;
        }
    }
}

int main(){
    vector<int> nums = {5,4,3,2,1};

    bubbleSortAscending(nums);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<"\t";
    }
    return 0;
}