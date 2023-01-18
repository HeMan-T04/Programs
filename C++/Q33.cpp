//Write a Program to illustrate concept of constructors in derived class in which no constructor is used in base class and derived class
#include <iostream>
using namespace std;
class employee
{
    int emp_id;
    char emp_name[20];
    public:
        void getdata()
        {
            cout << "Enter employee id: ";
            cin >> emp_id;
            cout << "Enter employee name: ";
            cin >> emp_name;
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
        void getdata()
        {
            employee::getdata();
            cout << "Enter salary: ";
            cin >> s;
        }
        void display()
        {
            employee::display();
            cout << "Salary: " << s << endl;
        }
};
int main(){
    salary ob;
    ob.getdata();
    ob.display();
}