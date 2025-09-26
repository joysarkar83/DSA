#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string capitalizeTitle(string& title) {
    string res = "", temp = "";
    int n = title.size();
    
    for(int i=0; i<n; i++){
        if(title[i] != ' '){
            temp += title[i];
        }
        else if(temp.size() <= 2){
            int idx = 0;
            while(idx < temp.size()){
                res += tolower(temp[idx++]);
            }
            res += ' ';
            temp.clear();
        }
        else{
            res += toupper(temp[0]);
            int idx = 1;
            while(idx < temp.size()){
                res += tolower(temp[idx++]);
            }
            res += ' ';
            temp.clear();
        }
    }
    if(temp.size() <= 2){
        int idx = 0;
        while(idx < temp.size()){
            res += tolower(temp[idx++]);
        }
    } else {
        res += toupper(temp[0]);
        int idx = 1;
        while(idx < temp.size()){
            res += tolower(temp[idx++]);
        }
    }
    return res;
}

int main(){
    string str = "capiTalIze TO titLe";

    cout<<capitalizeTitle(str);

    return 0;
}