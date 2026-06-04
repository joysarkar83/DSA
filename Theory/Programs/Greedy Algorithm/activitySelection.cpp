#include <iostream>
#include <vector>
using namespace std;

// It is given that the activities are sorted on the basis of end time
int maxActivities(vector<int>& start, vector<int>& end){
    int n = start.size();
    if(n <= 1){
        return n;
    }

    // Select A0 by default as it will always be selected
    // - "jaldi khatam ho raha hai matlab ki baaki activities k liye time bachayega"
    int count = 1;
    int currActivity = 0;
    cout<<"Selecting Activity: 0\n";
    
    for(int i=1; i<n; i++){
        if(start[i] >= end[currActivity]){
            count++;
            currActivity = i;
            cout<<"Selecting Activity: "<<i<<"\n";
        }
    }
    return count;
}

int main(){
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    cout<<"Total: "<<maxActivities(start, end);

    return 0;
}