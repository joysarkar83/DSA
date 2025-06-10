#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b) {
    string result = "";
    char remainder = '0';
    int idxA = a.size()-1, idxB = b.size()-1;
    while(idxA >= 0 && idxB >=0){
        if(a[idxA] == '1' && b[idxB] == '1' && remainder == '0'){
            result.insert(result.begin(), '0');
            remainder = '1';
        }
        else if(a[idxA] == '1' && b[idxB] == '1' && remainder == '1'){
            result.insert(result.begin(), '1');
            remainder = '1';
        }
        else if((a[idxA] == '1' && b[idxB] == '0' && remainder == '0') || (a[idxA] == '0' && b[idxB] == '1' && remainder == '0')){
            result.insert(result.begin(), '1');
            remainder = '0';
        }
        else if((a[idxA] == '1' && b[idxB] == '0' && remainder == '1') || (a[idxA] == '0' && b[idxB] == '1' && remainder == '1')){
            result.insert(result.begin(), '0');
            remainder = '1';
        }
        else if(a[idxA] == '0' && b[idxB] == '0' && remainder == '1'){
            result.insert(result.begin(), '1');
            remainder = '0';
        }
        else{
            result.insert(result.begin(), '0');
            remainder = '0';
        }
        idxA--; idxB--;
    }
    
    while(idxA >= 0){
        if((a[idxA] == '1' && remainder == '0') || (a[idxA] == '0' && remainder == '1')){
            result.insert(result.begin(), '1');
            remainder = '0';
        }
        else if(a[idxA] == '0' && remainder == '0'){
            result.insert(result.begin(), '0');
        }
        else{
            result.insert(result.begin(), '0');
            remainder = '1';
        }
        idxA--;
    }
    while(idxB >= 0){
        if((b[idxB] == '1' && remainder == '0') || (b[idxB] == '0' && remainder == '1')){
            result.insert(result.begin(), '1');
            remainder = '0';
        }
        else if(b[idxB] == '0' && remainder == '0'){
            result.insert(result.begin(), '0');
        }
        else{
            result.insert(result.begin(), '0');
            remainder = '1';
        }
        idxB--;
    }
    if(remainder == '1'){
        result.insert(result.begin(), '1');
        remainder = '0';
    }
    return result;
}

int main(){
    string a = "11", b = "1";

    cout<<addBinary(a, b);

    return 0;
}