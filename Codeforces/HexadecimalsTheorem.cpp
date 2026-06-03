#include <iostream>
#include <vector>
using namespace std;

void generateFibonacci(vector<int>& vec, int& n){
    int curr = *prev(vec.end()) + *prev(prev(vec.end()));
    if(curr >= n){
        return;
    }
    else{
        vec.emplace_back(curr);
        generateFibonacci(vec, n);
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> fibo = {0, 1};
    generateFibonacci(fibo, n);

    int k = fibo.size();

    for(int a = k-1; a>=0; a--){
        for(int b = k-1; b>=0; b--){
            for(int c = k-1; c>=0; c--){
                if(fibo[a] + fibo[b] + fibo[c] == n){
                    cout<<fibo[a]<<" "<<fibo[b]<<" "<<fibo[c]<<"\n";
                    return 0;
                }
            }
        }
    }

    return 0;
}

// Alternate Solution

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // 0 is a Fibonacci number, and 0 + 0 + n = n
    cout << 0 << " " << 0 << " " << n << "\n";
    
    return 0;
}