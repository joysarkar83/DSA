#include <iostream>
using namespace std;

char nextChar(char alpha){
    return (char)((int)alpha+1);
}

int main(){
    char alpha;
    cout<<"Enter alphabet: ";
    cin>>alpha;

    cout<<">> "<<nextChar(alpha);
    return 0;
}