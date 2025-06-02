#include <iostream>
#include <string>
using namespace std;

int lowercaseVowelCount(string str){
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    return count;
}

int main(){
    string text = "aaiIeeoouu"; //5

    cout<<lowercaseVowelCount(text);
    return 0;
}