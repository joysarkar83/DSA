#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int numUniqueEmails(vector<string>& emails) {
    int count = 0;
    unordered_map<string, bool> dir;

    for(string& email:emails){
        int n = email.size();
        string curr = "";

        int i=0;
        for (; i < n && email[i] != '@'; i++) {
            if(email[i] == '.'){
                continue;
            }
            else if(email[i] == '+'){
                while(i<n && email[i] != '@') i++;
                break;
            }
            else{
                curr += email[i];
            }
        }
        for(i; i<n; i++){
            curr += email[i];
        }
        dir[curr] = true;
    }
    return dir.size();
}

int main(){

    return 0;
}