#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Issue with TLE

class FoodRatings {
public:
    unordered_map<string, pair<string, int>> data;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for(int i=0; i<n; i++){
            data[foods[i]] = {cuisines[i], ratings[i]};
        }
    }
    
    void changeRating(string food, int newRating) {
        data[food].second = newRating;
    }
    
    string highestRated(string cuisine) {
        int maxRating = 0;
        string res = "";

        for(auto itr = data.begin(); itr != data.end(); itr++){
            if(itr->second.first == cuisine){
                if(itr->second.second > maxRating){
                    maxRating = itr->second.second;
                    res = itr->first;
                }
                else if(itr->second.second == maxRating){
                    res = min(itr->first, res);
                }
            }
        }
        return res;
    }
};

int main(){

    return 0;
}