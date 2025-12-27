#include <iostream>
using namespace std;

double angleClock(int hour, int minutes) {
    if(hour == 12){
        hour = 0;
    }
    double hourAt = hour * 30;
    hourAt += ((double)minutes/60) * 30;

    double minAt = minutes * 6;

    double angle1 = abs(hourAt - minAt);
    double angle2 = 360.0 - abs(hourAt - minAt);

    return min(angle1, angle2);
}

int main(){

    return 0;
}