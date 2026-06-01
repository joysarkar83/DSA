#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> cake(n, 0);

        long long sum = 0;
        long long minVal = INT_MAX;

        for(int j = 0; j < n; j++) {
            cin >> cake[j];

            sum += cake[j];

            long long currVal = sum / (j + 1);

            if(currVal < minVal) {
                minVal = currVal;
            }

            cout << minVal << " ";
        }

        cout << "\n";
    }

    return 0;
}