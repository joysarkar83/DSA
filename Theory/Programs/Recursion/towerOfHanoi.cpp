#include <iostream>
#include <string>
using namespace std;

void towerOfHanoi(int n, string left, string mid, string right){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1, left, right, mid);
    cout<<"Moved: "<<left<<" to "<<right<<"\n";
    towerOfHanoi(n-1, mid, left, right);
}

int main(){
    towerOfHanoi(3, "Left", "Mid", "Right");

    return 0;
}