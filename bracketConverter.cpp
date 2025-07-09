#include <iostream>
#include <string>
using namespace std;

void addNewline(string& str, int& n){
    for(int i=0; i<n; i++){
        if(str[i] == ',' && str[i+1] == '{'){
            str.insert(str.begin()+i+1, '\n');
            n+=1;
        }
    }
}

void squareToCulry(string& str){
    int n = str.size();
    for(int i=0; i<n; i++){
        if(str[i] == '['){
            str[i] = '{';
        }
        else if(str[i] == ']'){
            str[i] = '}';
        }
    }
    addNewline(str, n);
    cout<<str;
}

int main(){
    string str = "[[1,3,1],[1,5,1],[4,2,1]]";

    squareToCulry(str);

    return 0;
}