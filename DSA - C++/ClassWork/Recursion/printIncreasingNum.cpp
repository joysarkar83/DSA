#include <iostream>
using namespace std;

void printIncreasingNum(int n){
    if(n==0){
        return;
    }
    printIncreasingNum(n-1);
    cout<<n<<"\n";
}

int main(){
    printIncreasingNum(5);
    return 0;
}