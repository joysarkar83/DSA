#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

// int kadanesAlgo(vector<int> inputVector){
//     int currSum = 0, maxSum = INT_MIN;
//     for (int i = 0; i<inputVector.size(); i++){
//         currSum += inputVector[i];
//         if (currSum > maxSum){
//             maxSum = currSum;
//         }
//         if (currSum < 0){
//             currSum = 0;
//         }
//     }
//     return maxSum;
// }

// vector<int> reverseArray(vector<int> inputVector){
//     int size = inputVector.size();
//     for(int i=0, j=size-1; i<j; i++, j--){
//         swap(inputVector[i], inputVector[j]);
//     }

//     return inputVector;
// }

// int binarySearch(vector<int> inputVector, int target){
//     int strIndex = 0, endIndex = inputVector.size()-1;
//     while(strIndex <= endIndex){
//         int mid = strIndex + ((endIndex - strIndex) / 2);
//         if (target == inputVector[mid]){
//             return mid;
//         }
//         else if(target > inputVector[mid]){
//             strIndex = mid+1;
//         }
//         else{
//             endIndex = mid - 1;
//         }
//     }
//     return -1;
// }

// int linearSearch(vector<int> inputVector, int target){
//     for(int i=0; i<inputVector.size(); i++){
//         if(inputVector[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// void stairCaseSearch(vector<vector<int>> inputVector, int target){
//     int nRow = inputVector.size()-1, nCol = inputVector[0].size()-1;
//     int currRow = 0, currCol = nCol;
//     while(currRow <= nRow && currCol >= 0){
//         if (target == inputVector[currRow][currCol]){
//             cout<<"Row: "<<currRow+1<<"\tColumn: "<<currCol+1;
//             return;
//         }
//         else if(target < inputVector[currRow][currCol]){
//             currCol -= 1;
//         }
//         else{
//             currRow += 1;
//         }
//     }
//     cout<<"Not Found!!";
// }

// vector<int> bubbleSort(vector<int> inputVector){
//     int len = inputVector.size();
//     for(int i=0; i<len-1; i++){
//         bool reqSort = false;
//         for(int j=1; j<len-i; j++){
//             if(inputVector[j-1]>inputVector[j]){
//                 swap(inputVector[j],inputVector[j-1]);
//                 reqSort = true;
//             }
//         }
//         if(!reqSort){
//             break;
//         }
//     }
//     return inputVector;
// }

// vector<int> selectionSort(vector<int> inputVector){
//     for (int i=0; i<inputVector.size()-1; i++){
//         int minIdx = i;
//         for (int j=i+1; j<inputVector.size(); j++){
//             if (inputVector[j] < inputVector[minIdx]){
//                 minIdx = j;
//             }
//         }
//         swap(inputVector[i], inputVector[minIdx]);
//     }
//     return inputVector;
// }

// vector<int> insertionSort(vector<int> inputVector){
//     for(int i=1; i<inputVector.size(); i++){
//         for(int j=i; j>0; j--){
//             if(inputVector[j]<inputVector[j-1]){
//                 swap(inputVector[j],inputVector[j-1]);
//             }
//         }
//     }
//     return inputVector;
// }

// vector<int> countingSort(vector<int> inputVector){
//     int max = INT_MIN, min = INT_MAX;
//     for (int i=0; i<inputVector.size(); i++){
//         if(inputVector[i] > max){
//             max = inputVector[i];
//         }
//         if(inputVector[i] < min){
//             min = inputVector[i];
//         }
//     }

//     vector<int> freq(max+1, 0);
//     for(int i=0; i<inputVector.size(); i++){
//         freq[inputVector[i]]++;
//     }
    
//     for(int i=min, finalIndex=0; i<=max; i++){
//         while(freq[i]>0){
//             inputVector[finalIndex++] = i;
//             freq[i]--;
//         }
//     }
//     return inputVector;
// }



int main(){
    // vector<int> array = {13,10,27,2,7};

    // vector<int> finalArray = countingSort(array);

    // for (int i=0; i<finalArray.size(); i++){
    //     cout<<finalArray[i]<<"\t";
    // }

    string str = "hello";
    cout<<str.length()<<"\n"<<str.size();
    return 0;
}