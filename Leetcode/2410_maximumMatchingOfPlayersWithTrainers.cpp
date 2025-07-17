#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
    int nPlayers = players.size();
    int nTrainers = trainers.size();

    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());

    int count=0, j = -1;
    for(int i=0; i<nPlayers; i++){
        for(j++; j<nTrainers; j++){
            if(players[i] <= trainers[j]){
                count++;
                cout<<"i["<<i<<"]\tj["<<j<<"]\tCount["<<count<<"]\n";
                break;
            }
        }
    }
    return count;
}

int main(){
    vector<int> players = {1,2,3};
    vector<int> trainers = {3};

    cout<<matchPlayersAndTrainers(players, trainers)<<"\n";

    return 0;
}