#include <iostream>
#include <vector>
using namespace std;

//To bring the minimum value at the beginning

void selectionSortAscending(vector<int> &nums){
    
    for(int i=0; i<nums.size()-1; i++){         //Will run through all element except the last one, coz it is obviously the max if the rest of the array is sorted
        int minIdx = i;                            //Considering i as minimum i.e. sorted by default
        for(int j=i+1; j<nums.size(); j++){     //Loop through rest of the array to find lesser value than i
            if(nums[j]<nums[minIdx]){              //Lesser value found
                minIdx = j;                        //Making it the minimum value
            }
        }
        swap(nums[minIdx], nums[i]);
    }                                           //Move to the next iteration

}

int main(){
    vector<int> nums = {5,4,1,3,2};

    selectionSortAscending(nums);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<"\t";
    }
    return 0;
}