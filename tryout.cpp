#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

// bool comp(pair<int, int> p1, pair<int, int> p2){
//     if (p2.second > p1.second){
//         return true;
//     } else if(p2.second < p1.second){
//         return false;
//     } else{
//         if(p1.first > p2.first){
//             return true;
//         } else{
//             return false;
//         }
//     }
// }
// int main(){
//     pair<int, int> arr[] = {{1,2},{2,1},{4,1}};

//     sort(arr, arr+sizeof(arr)/sizeof(arr[0]), comp);

//     for(auto p : arr){
//         cout << "{" << p.first << "," << p.second << "} ";
//     }
// }



// int main(){

//     int num = 13;
//     int num2 = __builtin_popcount(num);
//     cout<<num2;
//     return 0;
// }


int main(){
    string str = "123";
    do{
        cout << str << "\n";
    } while(next_permutation(str.begin(), str.end()));
    return 0;
}