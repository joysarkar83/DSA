#include <iostream>
using namespace std;

void capitalize(char words[], int len){
    for(int i=0; i<len && words[i]!='\0'; i++){
        if(words[i]>='a' && words[i]<='z'){
            words[i]-=32;
        }
        cout<<words[i];
    }
}

int main(){
    char words[20];
    cout<<"Enter your word: ";
    cin.getline(words, 20);

    capitalize(words, 20);
    return 0;
}