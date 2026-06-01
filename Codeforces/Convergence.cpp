#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int nf;
        cin >> nf;

        vector<int> locations(nf);

        for (int j = 0; j < nf; j++) {
            cin >> locations[j];
        }

        sort(locations.begin(), locations.end());

        int ans = nf;
        int less = 0;

        for (int i = 0; i < nf; ) {
            int j = i;

            while (j < nf && locations[j] == locations[i])
                j++;

            int freq = j - i;
            int greater = nf - less - freq;

            ans = min(ans, max(less, greater));

            less += freq;
            i = j;
        }

        cout << ans << '\n';
    }

    return 0;
}