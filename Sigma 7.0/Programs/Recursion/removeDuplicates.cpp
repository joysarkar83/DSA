#include <iostream>
#include <string>
using namespace std;

string uniqueElems(string str, int i, string finalStr, bool used[26]){

    if(i == str.length()){
        return finalStr;
    }

    if(used[int(str[i])-65] == false){
        finalStr.push_back(str[i]);
        used[int(str[i])-65] = true;
    }

    return uniqueElems(str, i+1, finalStr, used);
}

int main(){
    string str = "jjooyyssaarrkkaarr";
    bool used[26] = {0};
    string finalStr = "";

    cout<<uniqueElems(str, 0, finalStr, used);

    return 0;
}