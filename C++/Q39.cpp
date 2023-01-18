// Write a Program to illustrate concept of constructors in derived class in which Explicit invocation is there in absence of default constructor

#include <iostream>
using namespace std;
class Base
{
public:
    Base(int x)
    {
        cout << "Base class constructor called with x = " << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived(int x, int y) : Base(x)
    {
        cout << "Derived class constructor called with y = " << y << endl;
    }
};

int main()
{
    Derived obj(10, 20);
    return 0;
}