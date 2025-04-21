#include <iostream>
#include <string>
using namespace std;

string evenOrOdd(int num){
    if(num & 1 == 1){
        return "odd";
    }
    return "even";
}

int main(){
    int num = 70;
    cout<<evenOrOdd(num);
    return 0;
}