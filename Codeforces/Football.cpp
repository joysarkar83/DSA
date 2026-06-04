#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;

    map<string, int> score;
    for(int i=0; i<n; i++){
        string team;
        cin >> team;
        score[team]++;
    }

    if(score.begin()->second > prev(score.end())->second){
        cout<<score.begin()->first;
    }else{
        cout<<prev(score.end())->first;
    }
    return 0;
}