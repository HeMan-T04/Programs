//2.Write a Program to read a floating point number and print Integer and Float part of the number separately
#include <iostream>
using namespace std;
int main()
{
    float ft,f;
    int it;
    cout << "Enter the floating number: ";
    cin >> ft;
    it=ft;
    f=ft-it;
    cout << "Integer part: " << it<< endl <<"Floating Part : ";
    fprintf(stdout,"%.2f",f);
}