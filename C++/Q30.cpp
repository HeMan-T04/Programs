//Write a C++ program handling following details of a student and staff using inheritance 
#include <iostream>
using namespace std;
class person
{
    char name[20];
    int age;
    public:
        void getdata()
        {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};
class student:public person
{
    int rollno;
    char course[20];
    public:
        void getdata()
        {
            person::getdata();
            cout << "Enter roll number: ";
            cin >> rollno;
            cout << "Enter course: ";
            cin >> course;
        }
        void display()
        {
            person::display();
            cout << "Roll number: " << rollno << endl;
            cout << "Course: " << course << endl;
        }
};
class staff:public person
{
    int staffid;
    char dept[20];
    public:
        void getdata()
        {
            person::getdata();
            cout << "Enter staff id: ";
            cin >> staffid;
            cout << "Enter department: ";
            cin >> dept;
        }
        void display()
        {
            person::display();
            cout << "Staff id: " << staffid << endl;
            cout << "Department: " << dept << endl;
        }
};
int main(){
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