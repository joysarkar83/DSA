#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findContentChildren(vector<int>& greed, vector<int>& cookies) {
    int nGreed = greed.size();
    int nCookies = cookies.size();

    sort(greed.begin(), greed.end());
    sort(cookies.begin(), cookies.end());

    int count=0, j = -1;
    for(int i=0; i<nGreed; i++){
        for(j++; j<nCookies; j++){
            if(greed[i] <= cookies[j]){
                count++;
                cout<<"i["<<i<<"]\tj["<<j<<"]\tCount["<<count<<"]\n";
                break;
            }
        }
    }
    return count;
}

int main(){
    vector<int> greed = {1,2,3};
    vector<int> cookies = {3};

    cout<<findContentChildren(greed, cookies)<<"\n";

    return 0;
}