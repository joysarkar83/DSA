#include <iostream>
#include <vector>
using namespace std;

// vector<int> plusOne(vector<int>& digits) {
//     long long unsigned int num = 0;
//     for(int i=0; i<digits.size(); i++){
//         num = (num*10) + digits[i];
//     }
//     num++;

//     vector<int> result;
//     while(num>0){
//         int lastDig = num%10;
//         result.emplace_back(lastDig);
//         num /= 10;
//     }

//     for(int st=0, end=result.size()-1; st<end; st++, end--){
//         swap(result[st], result[end]);
//     }
//     return result;
// }

vector<int> plusOne(vector<int>& digits) {
    for(int i=digits.size()-1; i>=0; i--){
        if(digits[i] < 9){
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(),1);
    return digits;
}

int main(){
    vector<int> arr = {7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6};

    vector<int> res = plusOne(arr);

    for(int i:res){
        cout<<i<<" ";
    }

    return 0;
}