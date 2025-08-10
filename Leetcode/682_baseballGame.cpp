#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int calPoints(vector<string>& operations) {
    stack<int> record;
    for(string i:operations){
        if((i == "+") && (record.size() >= 2)){
            int sum = 0;
            int top = record.top();
            sum += top;
            record.pop();
            sum += record.top();
            record.push(top);
            record.push(sum);
        }
        else if((i == "D") && (record.size() >= 1)){
            record.push(record.top() * 2);
        }
        else if((i == "C") && (record.size() >= 1)){
            record.pop();
        }
        else{
            record.push(stoi(i));
        }
    }

    int score = 0;
    while(!record.empty()){
        score += record.top();
        record.pop();
    }
    return score;
}

int main(){

    return 0;
}