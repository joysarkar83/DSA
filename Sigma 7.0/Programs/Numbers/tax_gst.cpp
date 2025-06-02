#include <iostream>
using namespace std;
int main(){
    float pencil, eraser, pen, tax, amount;
    cout<<"Price of pencil: ";
    cin>>pencil;
    cout<<"Price of pen: ";
    cin>>pen;
    cout<<"Price of eraser: ";
    cin>>eraser;

    tax = (pen + pencil + eraser) * 0.18;
    amount = (pen + pencil + eraser) + tax;

    cout<<"Tax: "<<tax<<"\n";
    cout<<"Amount: "<<amount;

    return 0;
}