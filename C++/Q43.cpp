// Write a Program to illustrate concept of constructors in derived class in which constructor is used in multilevel inheritance
#include <iostream>
using namespace std;
class Base1 {
  public:
    Base1() {
        cout << "Base1 class default constructor called" << endl;
    }
};
class derived1: public Base1 {
  public:
    derived1() {
        cout << "derived1 class default constructor called" << endl;
    }
};
class derived2: public derived1{
    public:
        derived2() {
            cout << "derived2 class default constructor called" << endl;
        }
};
int main() {
    derived2 obj;
    return 0;
}   