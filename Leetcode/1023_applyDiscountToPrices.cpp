#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cctype>
using namespace std;

string discountPrices(string sentence, int discount) {
    int n = sentence.size();
    string newStr;

    for (int i = 0; i < n; i++) {
        if (sentence[i] == '$') {
            int j = i + 1;
            string amtStr;

            // collect digits only
            while (j < n && isdigit(sentence[j])) {
                amtStr += sentence[j];
                j++;
            }

            // valid price = only digits and followed by space/end
            if (!amtStr.empty() && (j == n || sentence[j] == ' ')) {
                long double amt = stold(amtStr);
                amt = amt * (100 - discount) / 100.0;

                stringstream ss;
                ss << fixed << setprecision(2) << amt;
                newStr += "$" + ss.str();
                i = j - 1; // skip processed number
            } else {
                newStr += "$"; // invalid case, keep original symbol
            }
        } else {
            newStr += sentence[i];
        }
    }

    return newStr;
}

int main(){

    return 0;
}