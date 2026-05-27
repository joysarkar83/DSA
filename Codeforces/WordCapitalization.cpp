#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;

    str[0] = toupper(str.front());

    cout<<str;

    return 0;
}