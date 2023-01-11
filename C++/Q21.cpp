// Make an inline function to find square of a number
#include <iostream>
using namespace std;
inline int square(int n)
{
    return n * n;
}
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Square of " << a << " is " << square(a)<< endl ;
    return 0;
}
