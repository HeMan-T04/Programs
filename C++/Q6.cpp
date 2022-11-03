//6. Write a Program to print factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter the value of n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of " << n << " is " << fact;
    return 0;
}