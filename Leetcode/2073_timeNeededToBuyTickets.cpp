#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
    //Preparing queue
    queue<int> line;
    for(int i:tickets){
        line.push(i);
    }

    int time = 0;
    int kVal = tickets[k];

    //queue is ready
    while(!line.empty() && kVal>0){
        int f = line.front();
        if(f-1 != 0){
            line.push(f-1);
        }
        line.pop();
        time++;
        k--;
        
        if(k < 0){
            k = line.size()-1;
            kVal--;
        }
    }
    return time;
}

int main(){
    vector<int> tickets = {5,1,1,1};

    cout<<timeRequiredToBuy(tickets, 0);


    return 0;
}