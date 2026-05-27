#include <iostream>
#include <vector>
using namespace std;

bool anyNumSame(int n){
    vector<int> freq(10, 0);
    while(n > 0){
        freq[n%10]++;
        n /= 10;
    }
    for(int& i:freq){
        if(i > 1){
            return false;
        }
    }
    return true;
}

int main(){
    int yr;
    cin >> yr;
    yr+=1;

    int run = anyNumSame(yr);

    while(!run){
        yr++;
        run = anyNumSame(yr);
    }
    cout<<yr;

    return 0;
}