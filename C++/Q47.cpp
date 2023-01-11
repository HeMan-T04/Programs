//Illustrate the concept of Multipath Inheritance and Virtual Base Class by focusing on following relation:
#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    char course[15];
public:
    void getdata(){
        cout << "Enter roll no: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin.ignore();
        cin.getline(name, 20);
        cout << "Enter course: ";
        cin.getline(course, 15);
    }
    void display(){
        cout << "Roll no: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};
class internal_exam: virtual public student
{
protected:
    int marks[5];
public:
    void getdata(){
        student::getdata();
        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void display(){
        student::display();
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};
class external_exam: virtual public student
{
protected:
    int marks[5];
public:
    void getdata(){
        student::getdata();
        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void display(){
        student::display();
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};
class result: public internal_exam, public external_exam
{
    int total;
public:
    void getdata(){
        internal_exam::getdata();
        external_exam::getdata();
    }
    void display(){
        internal_exam::display();
        external_exam::display();
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += internal_exam::marks[i] + external_exam::marks[i];
        }
        cout << "Total: " << total << endl;
    }
};
int main()
{
    result r;
    r.getdata();
    r.display();
    return 0;
}
