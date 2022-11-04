#include <iostream>
using namespace std;
class A {
    public:
        ~A() { cout << "destructor" << endl; }
};
A obj;
int main() {
    cout << "main()" << endl;
    return 0;
}