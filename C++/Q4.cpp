//4. Write a Program to check weather a number is Even or Odd
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "The number is Even";
    }
    else
    {
        cout << "The number is Odd";
    }
    return 0;
}