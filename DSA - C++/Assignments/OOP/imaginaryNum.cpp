#include <iostream>
using namespace std;

class Complex{
    public:
    int real, imaginary;

    Complex(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    void printImaginaryNum(){
        cout<<real<<" + "<<imaginary<<"i\n";
    }

    // void subtract(Complex &object){
    //     this->real -= object.real;
    //     this->imaginary -= object.imaginary;
    // }

    Complex operator - (Complex &obj){
        int realRes = this->real - obj.real;
        int imgRes = this->imaginary - obj.imaginary;
        Complex res(realRes, imgRes);
        return res;
    }
};

int main(){
    Complex num1(7, 5);
    Complex num2(2, 4);

    num1.printImaginaryNum();
    num2.printImaginaryNum();

    Complex c3 = num1 - num2;
    c3.printImaginaryNum();

    return 0;
}