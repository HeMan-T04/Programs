// 7.Write a Program to print the following Pattern
// 55555
// 4444
// 333
// 22
// 1
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}