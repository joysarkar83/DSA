#include <iostream>
using namespace std;

// int rotatedDigits(int n) {
//     int goodCnt = 0;

//     for(int i=1; i<=n; i++){
//         int guineaPig = i;
//         while(guineaPig > 0){
//             int dig = guineaPig % 10;
//             if(dig == 2 || dig == 5 || dig == 6 || dig == 9){
//                 guineaPig /= 10;
//                 continue;
//             }
//             else{
//                 break;
//             }
//         }
//         if(guineaPig == 0){
//             goodCnt++;
//         }
//     }
//     return goodCnt;
// }

int rotatedDigits(int n) {
    int goodCnt = 0;

    for(int i=1; i<=n; i++){
        int newNum = 0;
        int guineaPig = i;
        bool good = true;
        int place = 1;

        while(guineaPig > 0){
            int dig = guineaPig % 10;
            guineaPig /= 10;
            int changedTo = dig;

            if(dig == 3 || dig == 4 || dig == 7){
                good = false;
                break;
            }
            else if(dig == 2) changedTo = 5;
            else if(dig == 5) changedTo = 2;
            else if(dig == 6) changedTo = 9;
            else if(dig == 9) changedTo = 6;

            newNum += (changedTo * place);
            place *= 10;
        }

        if(good && (i != newNum)){
            goodCnt++;
        }
    }
    return goodCnt;
}

int main(){
    cout<<rotatedDigits(10);

    return 0;
}