#include <iostream>
#include <vector>
#include <string>
using namespace std;
void generate(vector<string>& final, int currDigIndex, string currString, string digits, vector<string>& data){
    
    if(currDigIndex == digits.length()){
        final.push_back(currString);
        return;
    }
    
    int digit = digits[currDigIndex] - '0';
    for(int i = 0; i < data[digit].length(); i++){
        generate(final, currDigIndex + 1, currString + data[digit][i], digits, data);
    }
    
    return;
}

vector<string> letterCombinations(string& digits){
    vector<string> final;
    if(digits.length() == 0){
        return final;
    }
    vector<string> data = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    generate(final, 0, "", digits, data);
    return final;
}

int main(){
    string dig = "23";

    vector<string> combo = letterCombinations(dig);

    for(string i:combo){
        cout<<i<<" ";
    }

    return 0;
}