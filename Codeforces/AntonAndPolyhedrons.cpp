#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int res = 0;
    while(n--){
        string str;
        cin >> str;
        if(str == "Tetrahedron"){
            res += 4;
        }else if(str == "Cube"){
            res += 6;
        }else if(str == "Octahedron"){
            res += 8;
        }else if(str == "Dodecahedron"){
            res += 12;
        }else{
            res += 20;
        }
    }
    cout<<res;

    return 0;
}