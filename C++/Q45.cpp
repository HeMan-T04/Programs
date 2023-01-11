//Consider a publishing company that publishes and markets books, whose activities are shown. Create a class publication that stores the title and price of a publication. Create another class sales that holds an array of three float’s so that it can record the sales of a publication for the last three months. For these two classes, derive a new class called book that holds pages of integer type. Each of the classes should have member functions getdata( ) and display( ).
#include <iostream>
using namespace std;
class publication
{
    char title[20];
    float price;
    public:
        void getdata()
        {
            cout << "Enter title: ";
            cin >> title;
            cout << "Enter price: ";
            cin >> price;
        }
        void display()
        {
            cout << "Title: " << title << endl;
            cout << "Price: " << price << endl;
        }
};
class sales
{
    float s[3];
    public:
        void getdata()
        {
            cout << "Enter sales of last 3 months: ";
            for (int i = 0; i < 3; i++)
            {
                cin >> s[i];
            }
        }
        void display()
        {
            cout << "Sales of last 3 months: ";
            for (int i = 0; i < 3; i++)
            {
                cout << s[i] << " ";
            }
            cout << endl;
        }
};
class book: public publication, public sales
{
    int pages;
    public:
        void getdata()
        {
            publication::getdata();
            sales::getdata();
            cout << "Enter pages: ";
            cin >> pages;
        }
        void display()
        {
            publication::display();
            sales::display();
            cout << "Pages: " << pages << endl;
        }
};
int main()
{
    book b;
    b.getdata();
    b.display();
    return 0;
}