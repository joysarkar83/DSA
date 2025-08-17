#include <iostream>
using namespace std;

int countSegments(string& s) {
    int segments = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
            segments++;
        }
    }
    return segments;
}

int main(){

    return 0;
}