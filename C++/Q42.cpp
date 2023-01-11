//Write a Program to illustrate concept of constructors in derived class in which constructor is used in base class and derived class in multiple inheritance 
#include <iostream>
using namespace std;
class Base1 {
  public:
    Base1() {
        cout << "Base1 class default constructor called" << endl;
    }
};

class Base2 {
  public:
    Base2() {
        cout << "Base2 class default constructor called" << endl;
    }
};

class Derived: public Base1, public Base2 {
  public:
    Derived() {
        cout << "Derived class default constructor called" << endl;
    }
};

int main() {
    Derived obj;
    return 0;
}