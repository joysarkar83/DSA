#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    int smallCnt = 0, capitalCount = 0;
    string small, capital;

    for(char ch:str){
        if(islower(ch)){
            smallCnt++;
        }
        else{
            capitalCount++;
        }
        small.push_back(tolower(ch));
        capital.push_back(toupper(ch));
    }

    if(capitalCount > smallCnt){
        cout<<capital;
    }else{
        cout<<small;
    }

    return 0;
}