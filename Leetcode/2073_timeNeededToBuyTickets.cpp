#include <iostream>
#include <queue>
#include <vector>
using namespace std;

//Optimised - Observing pattern
int timeRequiredToBuy(vector<int>& tickets, int k) {
    int time = 0;
    int kVal = tickets[k];

    for(int i=0; i<tickets.size(); i++){
        int currVal = tickets[i];
        if(i<k){
            time += min(currVal, kVal);
        }
        else if(i==k){
            time += currVal;
        }
        else{
            if(currVal < kVal){
                time += currVal;
            }
            else{
                time += kVal-1;
            }
        }
    }
    return time;
}


//Brute Force
// int timeRequiredToBuy(vector<int>& tickets, int k) {
//     //Preparing queue
//     queue<int> line;
//     for(int i:tickets){
//         line.push(i);
//     }

//     int time = 0;
//     int kVal = tickets[k];

//     //queue is ready
//     while(!line.empty() && kVal>0){
//         int f = line.front();
//         if(f-1 != 0){
//             line.push(f-1);
//         }
//         line.pop();
//         time++;
//         k--;
        
//         if(k < 0){
//             k = line.size()-1;
//             kVal--;
//         }
//     }
//     return time;
// }

int main(){
    vector<int> tickets = {4,3,5,6,4,5};

    cout<<timeRequiredToBuy(tickets, 2);
    
    return 0;
}