//Write a Program to overload Binary Operator using Friend Function
#include <iostream>
using namespace std;
class Sum
{
private:
    int a, b;
public:
    Sum(int a = 0, int b = 0)
    {
        this->a = a;
        this->b = b;
    }
    friend Sum operator+(Sum, Sum);
    void display()
    {
        cout << "a = " << a << " b = " << b << endl;
    }
};
Sum operator+(Sum s1, Sum s2)
{
    Sum s3;
    s3.a = s1.a + s2.a;
    s3.b = s1.b + s2.b;
    return s3;
}
int main()
{
    Sum s1(10, 20), s2(30, 40), s3;
    s3 = s1 + s2;
    s3.display();
}
