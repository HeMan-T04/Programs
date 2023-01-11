//Write a Program which reads two complex numbers, initialize objects with these two numbers and find multiplication of these using parametrized constructors.
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
        complex(complex &j,complex &k)
        {
            real = j.real*k.real;
            imag = j.imag*k.imag;
        }
        void display()
        {
            cout << real<<"+"<<"i"<<imag<<endl;
        }
};
int main(){
    int r,i;
    cout<<"Enter real and imaginary part of complex number 1: ";
    cin >> r >> i;
    complex ob1(r,i);
    cout<<"Enter real and imaginary part of complex number 2: ";
    cin >> r >> i;
    complex ob2(r,i);
    complex ob3(ob1,ob2);
    cout << "Complex number 1" << endl;
    ob1.display();
    cout << "Complex number 2" << endl;
    ob2.display();
    cout << "Multiplication of complex numbers" << endl;
    ob3.display();
}
