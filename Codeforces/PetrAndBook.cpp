#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, read = 0, day = 0;
    cin >> n;

    vector<int> days(7, 1);
    for(int i=0; i<7; i++){
        cin >> days[i];
    }

    for(int i=0; read < n; i++){
        read += days[i % 7];
        day++;
        if(day == 8){
            day = 1;
        }
    }
    cout<<day;

    return 0;
}