#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int count = 0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == ' ' && count == 0){
            continue;
        }
        else if(s[i] == ' ' && count>0){
            break;
        }
        else if(((s[i] >= 65) && (s[i] < 91)) || ((s[i] >= 97) && (s[i] < 123))){
            count++;
        }
    }
    return count;
}

int main(){
    string s = "luffy is still joyboy";
    cout<<lengthOfLastWord(s);
    return 0;
}