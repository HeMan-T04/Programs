//Identify the type of inheritance and implement the following relation:
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
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};
class student: public person
{
    protected:
    int rollno;
    char course[20];
    public:
        void accept()
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
            person::display();
            cout << "Roll no: " << rollno << endl;
            cout << "Course: " << course << endl;
        }
};
class sports: public person
{
    protected:
    int score;
    public:
        void accept()
        {
            cout << "Enter score: ";
            cin >> score;
        }
        void display()
        {
            cout << "Score: " << score << endl;
        }
};
class exam: public student
{
    protected:
    int marks[5];
    int total;
    public:
        void accept()
        {
            student::accept();
            total=0;
            cout << "Enter marks of 5 subjects: ";
            for (int i = 0; i < 5; i++)
            {
                cin >> marks[i];
                total=total+marks[i];
            }
        }
        void display()
        {
            student::display();
            cout << "Marks: ";
            for (int i = 0; i < 5; i++)
            {
                cout << marks[i] << " ";
            }
            cout << endl;
            cout << "Total:"<<total<<endl;
        }
};
class result: public exam, public sports
{
    protected:
    int total;
    public:
        void accept()
        {
            exam::accept();
            sports::accept();
            total=exam::total+score;
        }
        void display()
        {
            exam::display();
            sports::display();
            cout << "Total:"<<total<<endl;
        }
};
int main()
{
    result r;
    r.accept();
    r.display();
    return 0;
}