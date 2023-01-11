//Write a Program to illustrate concept of constructor overloading
#include <iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
        complex(int real,int imag)
        {
            this->real = real;
            this->imag = imag;
        }
        complex(int real)
        {
            this->real = real;
            this->imag = 0;
        }
        complex()
        {
            this->real = 0;
            this->imag = 0;
        }
        void display()
        {
            cout << real<<"+"<<"i"<<imag<<endl;
        }
};
int main(){
    int r,i;
    cout<<"Enter real and imaginary part of complex number: ";
    cin >> r >> i;
    complex ob1(r,i);
    cout<<"Enter real part of complex number: ";
    cin >> r;
    complex ob2(r);
    complex ob3;
    cout << "Complex number 1" << endl;
    ob1.display();
    cout << "Complex number 2" << endl;
    ob2.display();
    cout << "Complex number 3" << endl;
    ob3.display();
}