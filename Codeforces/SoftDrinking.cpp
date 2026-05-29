#include <iostream>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>> k>> l>> c>> d>> p>> nl>> np;

    int factor1 = (k * l) / nl;
    int factor2 = c * d;
    int factor3 = p / np;

    cout<<min(factor1, min(factor2, factor3))/n;

    return 0;
}