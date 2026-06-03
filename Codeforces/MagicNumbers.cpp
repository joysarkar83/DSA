#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    string curr;
    curr.push_back(str[0]);

    for(int i=1; i<str.size(); i++){
        char ch = str[i];
        if(ch != '1' && ch != '4'){
            cout<<"NO";
            return 0;
        }

        
        if(curr == "1"){
            if(ch == '1'){
                continue;
            }else{
                curr += ch;
            }
        }else if(curr == "14"){
            if(ch == '1'){
                curr.pop_back();
            }else{
                curr += ch;
            }
        }else if(curr == "144"){
            curr.clear();
            curr.push_back(ch);
        }
    }
    if(curr == "144" || curr == "14" || curr == "1"){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}