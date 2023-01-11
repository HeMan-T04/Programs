//Write a Program to illustrate concept of destructors
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
        ~complex()
        {
            cout << "Destructor called" << endl;
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
    cout << "Complex number:" << endl;
    ob1.display();
}