// Write a C++ program handling following details of a student and staff using inheritance
//  Student details:  Name, Address, Percentage, Marks
//  Staff details:  Name, Address, Salary
//  Create appropriate base and derived classes. Input the details and output them
#include <iostream>
using namespace std;
class person
{
    char name[20];
    char address[30];

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};
class student : public person
{
    float percentage;
    int marks;
public:
    void getdata()
    {
        person::getdata();
        cout << "Enter marks(Out of 500): ";
        cin >> marks;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    void display()
    {
        person::display();
        cout << "Marks: " << marks << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
class staff : public person
{
    int salary;
public:
    void getdata()
    {
        person::getdata();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display()
    {
        person::display();
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    student s;
    staff t;
    cout << "Enter details of student" << endl;
    s.getdata();
    cout << "Enter details of staff" << endl;
    t.getdata();
    cout << "Details of student" << endl;
    s.display();
    cout << "Details of staff" << endl;
    t.display();
}