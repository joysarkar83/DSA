#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int n, m;
    
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int max_ratio = 0;
    int freq = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            
            if (b[j] % a[i] == 0) {
                int current_ratio = b[j] / a[i];
                
                if (current_ratio > max_ratio) {
                    max_ratio = current_ratio;
                    freq = 1;
                } else if (current_ratio == max_ratio) {
                    freq++;
                }
            }
        }
    }
    
    cout << freq << "\n";

    return 0;
}