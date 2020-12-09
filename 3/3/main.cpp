#include <iostream>
using namespace std;
/*Ex 3
Perform addition operation on complex data using class and object. The program
should ask for real and imaginary part of two complex numbers, and display the real
and imaginary parts of their sum.*/

class imaginary{

     public:
    double x,y;

    imaginary(double ax, double ay){
    x=ax;y=ay;}
};

int main(){

    double nu1,nu2;
    cout << "first number \n";
    cout<< "Enter the real part:";
    cin>> nu1;
    cout<< "Enter the imaginary part:";
    cin>> nu2;
    imaginary number1(nu1,nu2);
    cout << "second number \n";
    double nu3,nu4;
    cout<< "Enter the real part:";
    cin>> nu3;
    cout<< "Enter the imaginary part:";
    cin>> nu4;

    imaginary number2(nu3,nu4);

    double real;

    real = number1.x +number2.x;

    double imaginary;

    imaginary = number2.x + number1.y;

    cout << "the sum of the real parts is "<< real << "\n";
    cout << "the sum of the imaginary parts is "<<imaginary;

    return 0;
}
