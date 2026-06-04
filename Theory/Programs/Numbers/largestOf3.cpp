#include <iostream>
using namespace std;

int largestOf(int a, int b, int c){
    int max = a;
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    return max;
}

int main(){
    int a=0,b=0,c=0;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    cout<<">> "<<largestOf(a,b,c);
    return 0;
}