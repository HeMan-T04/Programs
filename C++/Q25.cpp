//Write a Program which reads a complex number and copies that to another using copy constructor
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
        complex(complex &j)
        {
            real = j.real;
            imag = j.imag;
        }
        void display()
        {
            cout << real<<"+"<<"i"<<imag<<endl;
        }
};
int main()
{
    int real,imag;
    cout << "Enter real and imaginary part of complex number: ";
    cin >> real >> imag;
    complex ob1(real,imag);
    complex ob2(ob1);
    cout << "Complex number 1" << endl;
    ob1.display();
    cout << "Complex number 2" << endl;
    ob2.display();
    return 0;
}