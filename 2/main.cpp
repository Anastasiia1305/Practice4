#include <iostream>
using namespace std;
/*EX 2
Write a program and input two integers in main and pass them to default constructor
of the class. Show the result of the additon of two numbers.*/

class integers
{
    private:
        int x;
        int y;

     public:
        int get();
        int sum();
};

int integers::get()
{
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
}

int integers::sum()
{
   return (x+y);
}

int main()
{
    integers a;
    int add;
    a.get();
    add=a.sum();
    cout<<"Sum= "<<add<<endl;
    return 0;
}
