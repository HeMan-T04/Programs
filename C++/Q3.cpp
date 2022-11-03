// 3.Write a Program to calculate displacement using formulae s=ut+1/2at2 given values of a,u,t by the user
#include <iostream>
using namespace std;
int main()
{
    float a, u, t, s;
    cout << "Enter the value of a,u,t : ";
    cin >> a >> u >> t;
    s = u * t + 0.5 * a * t * t;
    cout << "The value of s is " << s;
    return 0;
}