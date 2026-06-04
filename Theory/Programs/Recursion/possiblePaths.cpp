#include <iostream>
using namespace std;

int possiblePaths(int rows, int columns){
    if(rows==1 || columns==1){
        return 1;
    }
    return possiblePaths(rows-1, columns) + possiblePaths(rows, columns-1);
}

int main(){
    int rows, columns;
    cout<<"No. of Rows: ";
    cin>>rows;
    cout<<"No. of Columns: ";
    cin>>columns;
    
    cout<<possiblePaths(rows, columns);
}