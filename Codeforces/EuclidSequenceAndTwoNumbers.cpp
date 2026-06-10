#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n, -1);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            int x = b[i], y = b[j];
            if (x < y) continue;

            vector<int> seq = {x, y};
            bool isValid = true;
            
            for (int k = 2; k < n; k++) {
                int nxt = seq[k - 2] % seq[k - 1];
                
                if (nxt <= 0) {
                    isValid = false;
                    break;
                }
                seq.push_back(nxt);
            }

            if (isValid) {
                vector<int> sorted_seq = seq;
                sort(sorted_seq.begin(), sorted_seq.end());
                
                if (sorted_seq == b) {
                    cout << x << " " << y << "\n";
                    return;
                }
            }
        }
    }
    cout << -1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}