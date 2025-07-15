#include <iostream>
#include <vector>
using namespace std;

int candy(vector<int>& ratings) {
    int n = ratings.size();

    if(n<=1){
        return n;
    }

    int sum = 0;
    vector<int> candies(n, 1);

    // Left element check for each element
    for(int i=1; i<n; i++){
        if(ratings[i-1] < ratings[i]){
            candies[i] = candies[i-1] + 1;
        }
    }

    // Right element check for each element
    for(int i=n-2; i>=0; i--){
        if(ratings[i] > ratings[i+1]){
            candies[i] = max(candies[i], candies[i+1] + 1);
        }
    }
    
    // Summing up all the candies
    for(int i=0; i<n; i++){
        sum += candies[i];
    }

    return sum;
}

int main(){
    vector<int> ratings = {1,3,4,5,2};

    cout<<candy(ratings)<<"\n";

    return 0;
}