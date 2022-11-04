//9. Write a Program to swap two numbers without using the third variable
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping: " << a << " " << b;
    return 0;
}