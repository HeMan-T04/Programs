// 1.Write a Program to find greatest of three numbers using Ternary Operator
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << "Largest number among " << a << ", " << b << " and " << c << " is " << max << ".";
    return 0;
}