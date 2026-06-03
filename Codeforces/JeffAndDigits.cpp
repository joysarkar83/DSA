#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count0 = 0;
    int count5 = 0;

    // Count the occurrences of 0 and 5
    for (int i = 0; i < n; i++) {
        int digit;
        cin >> digit;
        if (digit == 0) {
            count0++;
        } else if (digit == 5) {
            count5++;
        }
    }

    // Condition 1: We must have at least one 0 to be divisible by 10
    if (count0 == 0) {
        cout << -1 << "\n";
        return 0;
    }

    // Condition 2: The number of 5s must be a multiple of 9
    int usable5s = (count5 / 9) * 9;

    // If we can't even form one group of nine 5s, the best we can do is output 0
    if (usable5s == 0) {
        cout << 0 << "\n";
    } else {
        // Print the optimal number of 5s
        for (int i = 0; i < usable5s; i++) {
            cout << 5;
        }
        // Print ALL the 0s
        for (int i = 0; i < count0; i++) {
            cout << 0;
        }
        cout << "\n";
    }

    return 0;
}