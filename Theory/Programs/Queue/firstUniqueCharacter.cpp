#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

void firstUniqueElem(string& s){
    queue<char> q;
    vector<int> freq(26, 0);

    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        q.push(ch);
        freq[ch-'a']++;

        while(!q.empty() && freq[q.front()-'a']>1) q.pop();
    }

    if(q.empty()) cout<<"-1\n";
    else cout<<q.front()<<"\n";

    return;
}

int main(){
    string s = "abbaccdxeeffds";

    firstUniqueElem(s);

    return 0;
}