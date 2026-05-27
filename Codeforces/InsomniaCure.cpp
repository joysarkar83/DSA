#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int res = 0;
    vector<int> alive(d+1, 1);
    
    for(int i=k; i<=d; i+=k){
        alive[i] = 0;
    }
    for(int i=l; i<=d; i+=l){
        alive[i] = 0;
    }
    for(int i=m; i<=d; i+=m){
        alive[i] = 0;
    }
    for(int i=n; i<=d; i+=n){
        alive[i] = 0;
    }    
    
    for(int i=1; i<=d; i++){
        if(alive[i] == 0){
            res+=1;
        }
    }
    cout<<res;

    return 0;
}