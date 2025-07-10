#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int firstUniqChar(string& s) {
    vector<int> freq(26, 0);
    queue<int> firstUnique;

    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        firstUnique.push(i);
        freq[ch-'a']++;

        while(!firstUnique.empty() && freq[s[firstUnique.front()]-'a']>1) firstUnique.pop();
    }

    if(firstUnique.empty()) return -1;
    else return firstUnique.front();    
}

int main(){
    string s = "yekbsxznylrwamcaugrqrurvpqybkpfzwbqiysrdnrsnbftvrnszfjbkbmrctjizkjqoxqzddyfnavnhqeblfmzqgsjflghaulbadwqsyuetdelujphmlgtmkoaoijypvcajctbaumeromgejtewbwqptotrorephegyobbstvywljboeihdliknluqdpgampjyjpinxhhqexoctysfdciqjbzilnodzoihihusxluqoayenluziobxiodrfdkinkzzozmxfezfvllpdvogqqtquwcsijwachefspywdgsohqtlquhnoecccgbkrzqcprzmwvygqwddnehhi";

    cout<<firstUniqChar(s);

    return 0;
}