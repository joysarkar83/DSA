#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int longestMountain(vector<int>& arr) {
    int n = arr.size();
    if (n < 3) return 0;

    int maxLen = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i - 1] < arr[i]) {
            int up = 0, down = 0;

            while (i < n && arr[i - 1] < arr[i]) {
                up++;
                i++;
            }

            while (i < n && arr[i - 1] > arr[i]) {
                down++;
                i++;
            }

            if (up > 0 && down > 0) {
                maxLen = max(maxLen, up + down + 1);
            }

            i--;
        }
    }

    return maxLen;
}


int main(){

    return 0;
}