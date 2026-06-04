#include <iostream>
#include <string>
using namespace std;

void findSubsets(string str, string subset){
    int n = str.size();

    if(n == 0){
        cout<<subset<<"\n";
        return;
    }

    //Yes
    findSubsets(str.substr(1, n-1), subset+str[0]);

    //No
    findSubsets(str.substr(1, n-1), subset);
}

int main(){
    string str = "abcde", subs = "";

    findSubsets(str, subs);

    return 0;
}