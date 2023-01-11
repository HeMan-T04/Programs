//Write a Program to illustrate the concept of Friend Function and Friend Class
#include <iostream>
using namespace std;
class friendclass
{
    int a,b;
    public:
        friendclass(int a,int b)
        {
            this->a = a;
            this->b = b;
        }
        friend void display(friendclass &j);
        friend class sum;
};
void display(friendclass &j)
{
    cout << "A is " << j.a << endl;
    cout << "B is " << j.b << endl;
}
class sum
{
    int sum;
    public:
        void add(friendclass &j)
        {
            sum = j.a + j.b;
        }
        void sdisplay()
        {
            cout << "Sum is " << sum << endl;
        }
};
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin >> a >> b;
    friendclass ob1(a,b);
    display(ob1);
    sum s;
    s.add(ob1);
    s.sdisplay();
    return 0;
}