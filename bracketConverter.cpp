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
    // addNewline(str, n);
    cout<<str;
}

int main(){
    string str = "[[1,2,3],[4,5,6],[7,8,9]]";

    squareToCulry(str);

    return 0;
}