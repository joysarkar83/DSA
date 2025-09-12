#include <iostream>
#include <string>
using namespace std;

bool judgeCircle(string& moves) {
    int horizontal = 0, vertical = 0;
    for(char ch:moves){
        if(ch == 'U') vertical++;
        else if(ch == 'D') vertical--;
        else if(ch == 'R') horizontal++;
        else if(ch == 'L') horizontal--;
    }
    return ((horizontal == 0) && (vertical == 0));
}

int main(){

    return 0;
}