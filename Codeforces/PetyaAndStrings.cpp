#include <iostream>
using namespace std;

int main(){
    string str1, str2;
    cin>>str1>>str2;

    int n = str1.size();

    for(int i=0; i<n; i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    if(str1 == str2){
        cout<<"0";
    }else if(str1 > str2){
        cout<<"1";
    }else{
        cout<<"-1";
    }

    return 0;
}