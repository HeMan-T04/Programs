#include <iostream>
using namespace std;
class person
{
protected:
    char name[20];
    int age;

public:
    void accept()
    {
        cout << "Enter name: ";
        cin.getline(name, 20);
        cout << "Enter age: ";
        cin >> age;
    }
};
class student : public person
{
protected:
    int rollno;
    char course[20];
public:
    void saccept()
    {
        person::accept();
        cout << "Enter roll no: ";
        cin >> rollno;
        cout << "Enter course: ";
        cin.ignore();
        cin.getline(course, 20);
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no: " << rollno << endl;
        cout << "Course: " << course << endl;
    }
};
class exam: public student
{
protected:
    int marks[5];
public:
    void eaccept()
    {
        student::saccept();
        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void edisplay()
    {
        student::display();
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    exam e;
    e.eaccept();
    e.edisplay();
    return 0;
}