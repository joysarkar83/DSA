#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

bool isLongPressedName(string& name, string& typed) {
    int name_size = name.size(), typed_size = typed.size();
    vector<pair<char, int>> name_vector;
    vector<pair<char, int>> typed_vector;

    for(int i=0; i<name_size; i++){
        int count = 0;

        int j=i;
        for(j; j<name_size; j++){
            if(name[i] == name[j]){
                count++;
            }
            else{
                break;
            }
        }
        name_vector.emplace_back(name[i], count);
        i = j-1;
    }

    for(int i=0; i<typed_size; i++){
        int count = 0;

        int j=i;
        for(j; j<typed_size; j++){
            if(typed[i] == typed[j]){
                count++;
            }
            else{
                break;
            }
        }
        typed_vector.emplace_back(typed[i], count);
        i = j-1;
    }

    if(name_vector.size() != typed_vector.size()) return false;

    for(auto name_itr = name_vector.begin(), typed_itr = typed_vector.begin(); name_itr!=name_vector.end() && typed_itr!=typed_vector.end(); name_itr++, typed_itr++){
        if(name_itr->first != typed_itr->first){
            return false;
        }else{
            if(name_itr->second > typed_itr->second){
                return false;
            }
        }
    }
    return true;
}

int main(){

    return 0;
}