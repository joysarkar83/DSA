#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Number of terms: ";
    cin>>num;

    if(num<0){
        cout<<"Invalid";
    }
    else{
        int t1=0, t2=1;
        if(num==1){
            cout<<t1;
        }
        else if(num==2){
            cout<<t1<<"\t"<<t2;
        }
        else{
            cout<<t1<<"\t"<<t2;
            for(int i=3 ; i<=num ; i++){
                int t3=t1+t2;
                cout<<"\t"<<t3;
                t1=t2;
                t2=t3;
            }
        }
    }
    return 0;
}