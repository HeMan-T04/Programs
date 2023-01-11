//Write a Program to illustrate usage of constructors with default arguments
#include <iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
        complex(int real=10,int imag=8)
        {
            this->real = real;
            this->imag = imag;
        }
        void display()
        {
            cout << real<<"+"<<"i"<<imag<<endl;
        }
};
int main(){
    complex ob1;
    complex ob2(5);
    complex ob3(5,6);
    cout << "Complex number 1" << endl;
    ob1.display();
    cout << "Complex number 2" << endl;
    ob2.display();
    cout << "Complex number 3" << endl;
    ob3.display();
}