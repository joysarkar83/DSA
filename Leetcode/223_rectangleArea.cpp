#include <iostream>
using namespace std;

int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1,
                int bx2, int by2) {
    int ar = (abs(ax2 - ax1) * abs(ay2 - ay1)) + (abs(bx2 - bx1) * abs(by2 - by1));

    int cx1 = max(ax1, bx1);
    int cy1 = max(ay1, by1);
    int cx2 = min(ax2, bx2);
    int cy2 = min(ay2, by2);

    int commonAr = max(0,abs(cx2-cx1)) * max(0,abs(cy2-cy1));
    return ar - commonAr;
}

int main(){

    return 0;
}