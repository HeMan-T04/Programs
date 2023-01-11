// Write a Program by illustrating concepts of passing objects
// By reference
// By pointers
#include <iostream>
using namespace std;
class passing
{
    int a;
    public:
        passing(int a)
        {
            this->a = a;
        }
        void swapnum(passing &j)
        { // By reference
            int temp = a;
            a = j.a;
            j.a = temp;
        }
        void swap(passing *j)
        { // By pointers
            int temp = a;
            a = j->a;
            j->a = temp;
        }
        void display(passing &j)
        {
            cout << "A is " << a << " and B is " << j.a << endl;
        }
};
int main()
{
    passing a(10),b(20);
    a.display(b);
    cout << "Swap by reference" << endl;
    a.swapnum(b);
    a.display(b);
    cout << "Swap by pointers" << endl;
    a.swap(&b);
    a.display(b);
    return 0;
}