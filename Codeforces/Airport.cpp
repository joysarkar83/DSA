#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> seats(m);
    for(int i=0; i<m; i++){
        cin >> seats[i];
    }

    vector<int> cpy(seats.begin(), seats.end());
    int maxVal = 0, minVal = 0;
    
    for(int i=0; i<n; i++){
        sort(seats.begin(), seats.end(), greater<int>());
        maxVal += seats.front();
        seats[0] = seats[0] - 1;
    }
    
    for(int i=0; i<n; i++){
        sort(cpy.begin(), cpy.end());
        int j = 0;
        while(j<m && cpy[j]==0){
            j++;
        }
        minVal += cpy[j];
        cpy[j] = cpy[j] - 1;
    }

    cout<<maxVal<<" "<<minVal;

    return 0;
}