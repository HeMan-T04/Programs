// Write a Program to add two complex numbers 
// By primary objects or function arguments.
// By returning objects
#include <iostream>
using namespace std;
class Complex
{
    int real, imag;
public:
    Complex(int r = 0, int i = 0) //constructor
    {
        real = r;
        imag = i;
    }
    void display() //function to display complex number
    {
        cout << real << " + i" << imag << endl;
    }
    Complex add(Complex c) // By returning objects
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void add(Complex c1, Complex c2) // By primary objects or function arguments.
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    ~Complex() //destructor
    {
    }
};
int main()
{
    Complex c1(3, 4), c2(5, 6), c3,c4;
    c3 = c1.add(c2);
    c4.add(c1,c2);
    cout <<"By primary objects or function arguments."<<endl;
    c4.display();
    cout <<"By returning objects"<<endl;
    c3.display();
    return 0;
}