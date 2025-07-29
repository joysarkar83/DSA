#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
    int count5 = 0, count10 = 0, count20 = 0;
    int rem = 0;
    for(int i=0; i<bills.size(); i++){
        int curr = bills[i];

        if(curr == 5){
            count5++;
        }
        else if(curr == 10){
            count10++;
            rem = curr - 5;
        }
        else{
            count20++;
            rem = curr - 5;
        }

        if(rem > 0){
            while(rem >= 20 && count20>0){
                rem -= 20;
                count20--;
            }
            while(rem >= 10 && count10>0){
                rem -= 10;
                count10--;
            }
            while(rem >= 5 && count5>0){
                rem -= 5;
                count5--;
            }
        }
        if (rem != 0) return false;
    }
    return true;
}

int main(){
    vector<int> bills = {5,5,5,10,20};

    cout<<lemonadeChange(bills);

    return 0;
}