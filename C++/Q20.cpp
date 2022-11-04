//20.	Write a Program to swap two integer values, two floating point values, two character values using function overloading
#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}
void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10, b = 20;
    float c = 10.5, d = 20.5;
    char e = 'a', f = 'b';
    cout<<"Before swapping: "<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"c = "<<c<<" d = "<<d<<endl;
    cout<<"e = "<<e<<" f = "<<f<<endl;
    swap(a, b);
    swap(c, d);
    swap(e, f);
    cout<<"After swapping: "<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"c = "<<c<<" d = "<<d<<endl;
    cout<<"e = "<<e<<" f = "<<f<<endl;
    return 0;
}