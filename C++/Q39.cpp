//Write a Program to illustrate concept of constructors in derived class in which Explicit invocation is there in absence of default constructor
#include <iostream>
#include <cstring>
using namespace std;
class employee
{
    int emp_id;
    char emp_name[20];
    public:
        explicit employee(int a, char b[])
        {
            this->emp_id = a;
            strcpy(this->emp_name, b);
        }
        void display()
        {
            cout << "Employee id: " << emp_id << endl;
            cout << "Employee name: " << emp_name << endl;
        }
};
class salary: public employee
{
    int s;
    public:
        salary(int a, char b[], int c): employee(a, b)
        {
            this->s = c;
        }
        void display()
        {
            employee::display();
            cout << "Salary: " << s << endl;
        }
};
int main()
{
    int a,c;
    char b[20];
    cout << "Enter employee id: ";
    cin >> a;
    cout << "Enter employee name: ";
    cin >> b;
    cout << "Enter salary: ";
    cin >> c;
    salary ob(a,b,c);
    ob.display();
}
