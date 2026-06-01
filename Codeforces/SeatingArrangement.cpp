#include <iostream>
#include <string>
using namespace std;

int seatingArrangement(int& n,int& x,int& s,string& str,int idx,int emptyTables,int occupiedSeats){
    if(idx == n){
        return 0;
    }

    int notSeated = seatingArrangement(n, x, s, str,idx + 1,emptyTables,occupiedSeats);

    int seated = 0;

    char ch = str[idx];

    int openedTables = x - emptyTables;
    int freeSeatsInOpened = openedTables * s - occupiedSeats;

    if(ch == 'I'){
        if(emptyTables > 0){
            seated = 1 + seatingArrangement(n, x, s, str,idx + 1,emptyTables - 1,occupiedSeats + 1);
        }
    }
    else if(ch == 'E'){
        if(freeSeatsInOpened > 0){
            seated = 1 + seatingArrangement(n, x, s, str,idx + 1,emptyTables,occupiedSeats + 1);
        }
    }
    else{ // A

        if(emptyTables > 0){
            seated = max(seated,1 + seatingArrangement(n, x, s, str,idx + 1,emptyTables - 1,occupiedSeats + 1));
        }

        if(freeSeatsInOpened > 0){
            seated = max(seated,1 + seatingArrangement(n, x, s, str,idx + 1,emptyTables,occupiedSeats + 1));
        }
    }

    return max(seated, notSeated);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, x, s;
        string str;

        cin >> n >> x >> s;
        cin >> str;

        cout << seatingArrangement(n,x,s,str,0,x,0) << "\n";
    }

    return 0;
}