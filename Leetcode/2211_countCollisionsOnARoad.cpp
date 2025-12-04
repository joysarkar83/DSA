#include <iostream>
#include <stack>
using namespace std;

// Optimised
int countCollisions(string directions) {
    int count = 0, Rcount = 0;
    char prev;
    for(char ch:directions){
        if(!prev){
            prev = ch;
            if(ch == 'R'){
                Rcount++;
            }
            continue;
        }

        if(prev=='R' && ch=='L'){
            prev = 'S';
            count += (1 + Rcount);
            Rcount = 0;
        }
        else if(prev=='S' && ch=='L'){
            count+=1;
        }
        else if(prev=='R' && ch=='S'){   
            prev = 'S';
            count += (Rcount);
            Rcount = 0;
        }
        else{
            prev = ch;
            if(ch == 'R'){
                Rcount++;
            }
        }
    }
    return count;
}

// First Submission
// int countCollisions(string directions) {
//     int count = 0, Rcount = 0;
//     stack<char> stk;
//     for(char ch:directions){
//         if(stk.empty()){
//             stk.emplace(ch);
//             if(ch == 'R'){
//                 Rcount++;
//             }
//             continue;
//         }

//         char prev = stk.prev();
//         if(prev=='R' && ch=='L'){
//             stk.pop();
//             stk.emplace('S');
//             count += (1 + Rcount);
//             Rcount = 0;
//         }
//         else if(prev=='S' && ch=='L'){
//             count+=1;
//         }
//         else if(prev=='R' && ch=='S'){   
//             stk.pop();
//             stk.emplace('S');
//             count += (Rcount);
//             Rcount = 0;
//         }
//         else{
//             stk.emplace(ch);
//             if(ch == 'R'){
//                 Rcount++;
//             }
//         }
//     }
//     return count;
// }

int main(){

    return 0;
}