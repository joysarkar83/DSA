#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkAlphaNum(string& str){
    for(char& ch:str){
        if((ch == '_') || ((ch-'a'<26) && (ch-'a'>=0)) || ((ch-'A'<26) && (ch-'A'>=0)) || (ch-'0'<10) && (ch-'0'>=0)){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
    int n = code.size();

    vector<string> res, cat_electronics, cat_grocery, cat_pharmacy, cat_restaurant;

    for(int i=0; i<n; i++){
        if(isActive[i] && !code[i].empty()){
            if(checkAlphaNum(code[i])){
                string currBL = businessLine[i];
                if((currBL == "electronics")){
                    cat_electronics.emplace_back(code[i]);
                }
                else if((currBL == "grocery")){
                    cat_grocery.emplace_back(code[i]);
                }
                else if((currBL == "pharmacy")){
                    cat_pharmacy.emplace_back(code[i]);
                }
                else if((currBL == "restaurant")){
                    cat_restaurant.emplace_back(code[i]);
                }
            }
            
        }
    }
    sort(cat_electronics.begin(), cat_electronics.end());
    sort(cat_grocery.begin(), cat_grocery.end());
    sort(cat_pharmacy.begin(), cat_pharmacy.end());
    sort(cat_restaurant.begin(), cat_restaurant.end());
    for(int i=0; i<cat_electronics.size(); i++){
        res.emplace_back(cat_electronics[i]);
    }
    for(int i=0; i<cat_grocery.size(); i++){
        res.emplace_back(cat_grocery[i]);
    }
    for(int i=0; i<cat_pharmacy.size(); i++){
        res.emplace_back(cat_pharmacy[i]);
    }
    for(int i=0; i<cat_restaurant.size(); i++){
        res.emplace_back(cat_restaurant[i]);
    }
    return res;
}

int main(){

    return 0;
}