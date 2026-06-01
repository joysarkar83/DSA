#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int ar1, ar2, ar3;
    cin >> ar1 >> ar2 >> ar3;

    float a = sqrt((ar1 * ar3) / ar2);
    float b = (ar2 * a) / ar3;
    float c = ar3 / a;

    cout << 4 * (a + b + c);


    return 0;
}