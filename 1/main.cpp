#include <iostream>
using namespace std;
/*Ex 1
Write a class having two private variables and one member function which will return
the area of the rectangle.*/

class rectangle {

private:
 int length;
 int width;

 public:
 rectangle(int x, int y){
    length=x;
     width=y;
 }

 int area(){
return length*width;
}
};


int main () {
    int x;
    int y;
    cout<<"Enter length of rectangle:";
    cin>>x;
    cout<<"Enter width of rectangle:";
    cin>>y;
    rectangle rect(x,y);
    cout <<"Area:"<< rect.area();
     return 0;
   }
