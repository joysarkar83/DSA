#include <iostream>
#include <cstring>
using namespace std;

void reverse(char array[], int len){
    int start=0, end=len-1;
    while(start<=end){
        swap(array[start], array[end]);
        start++;end--;
    }
    for(int i=0; i<len; i++){
        cout<<array[i];
    }
}

int main(){
    char words[] = "sarkar"; 

    reverse(words, strlen(words));
    return 0;

}