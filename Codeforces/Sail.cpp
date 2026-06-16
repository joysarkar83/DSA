#include <iostream>
using namespace std;

int main() {
    int t, cx, cy, tx, ty;
    cin >> t >> cx >> cy >> tx >> ty;

    string wind;
    cin >> wind;

    if (cx == tx && cy == ty) {
        cout << 0 << "\n";
        return 0;
    }

    for (int i = 0; i < t; i++) {
        char ch = wind[i];

        if (ch == 'E' && cx < tx) cx++;
        else if (ch == 'W' && cx > tx) cx--;
        else if (ch == 'N' && cy < ty) cy++;
        else if (ch == 'S' && cy > ty) cy--;

        if (cx == tx && cy == ty) {
            cout << i + 1 << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
    return 0;
}