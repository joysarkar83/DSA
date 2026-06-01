#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> coords(n, pair<int,int>(2,0));
    for(int i=0; i<n; i++){
        cin>>coords[i].first>>coords[i].second;
    }
    
    int res = 0;
    for(int i=0; i<n; i++){
        int X = coords[i].first, Y = coords[i].second;

        bool leftCheck = false, rightCheck = false, topCheck = false, bottomCheck = false;
        for(int j=0; j<n; j++){
            int x = coords[j].first, y = coords[j].second;
            if(x == X && y > Y){
                topCheck = true;
            }else if(x == X && y < Y){
                bottomCheck = true;
            }else if(x > X && y == Y){
                rightCheck = true;
            }else if(x < X && y == Y){
                leftCheck = true;
            }
        }
        if(leftCheck && rightCheck && topCheck && bottomCheck){
            res++;
        }
    }
    cout<<res;

    return 0;
}