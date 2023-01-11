//Write a Program to implement the inheritance as shown in figure. Assume a suitable member function to accept and display data.
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
class emp_union
{
    int member_id;
    public:
        void getdata()
        {
            cout << "Enter member id: ";
            cin >> member_id;
        }
        void display()
        {
            cout << "Member id: " << member_id << endl;
        }
};
class emp_info: public employee, public emp_union
{
    int basic_salary;
    public:
        void getdata()
        {
            employee::getdata();
            emp_union::getdata();
            cout << "Enter basic salary: ";
            cin >> basic_salary;
        }
        void display()
        {
            employee::display();
            emp_union::display();
            cout << "Basic salary: " << basic_salary << endl;
        }
};
int main(){
    emp_info ob;
    ob.getdata();
    ob.display();
}