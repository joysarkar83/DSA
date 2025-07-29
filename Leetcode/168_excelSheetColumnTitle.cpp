#include <iostream>
#include <string>
using namespace std;

string convertToTitle(int num) {
    int r = 26;
    string word = "";
    while(num >= r){
        int rem = num%r;
        int val = num/r;
        while(val > 26){
            word+='z';
            val /= r;
        }
        word+=char(val + 'a' - 1);

        // cout<<word<<"\n";
        
        if(rem < r){
            word+=char(rem + 'a' - 1);
            break;
        }
        num/=r;
    }
    return word;
}

int main(){
    int num = 7071;

    cout<<convertToTitle(num);

    return 0;
}