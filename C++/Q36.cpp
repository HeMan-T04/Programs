//Write a Program to illustrate concept of constructors in derived class in which multiple constructors are used in base class and single constructor is used in derived class
#include <iostream>
#include <cstring>
using namespace std;
class employee
{
    int emp_id;
    char emp_name[20];
    public:
        employee(int a, char b[20])
        {
            this->emp_id = a;
            strcpy(this->emp_name,b);
        }
        employee(int a)
        {
            this->emp_id = a;
            strcpy(this->emp_name,"Employee");
        }
        employee()
        {
            this->emp_id = 0;
            strcpy(this->emp_name,"");
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
        salary(int a, char b[20], int c): employee(a,b)
        {
            this->s = c;
        }
        salary(int a, int c): employee(a)
        {
            this->s = c;
        }
        salary(int c): employee()
        {
            this->s = c;
        }
        void display()
        {
            employee::display();
            cout << "Salary: " << s << endl;
        }
};
int main(){
    int a,c;
    char b[20];
    cout << "Enter employee id: ";
    cin >> a;
    cout << "Enter employee name: ";
    cin >> b;
    cout << "Enter salary: ";
    cin >> c;
    salary ob(a,b,c);
    salary ob1(a,c);
    salary ob2(c);
    cout << "Records: "<< endl;
    ob.display();
    ob1.display();
    ob2.display();
}