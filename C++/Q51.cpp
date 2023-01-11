//Write a Program to Concatenate two Strings using Operator Overloading
#include <iostream>
#include <cstring>
using namespace std;
class AddString {
 
public:
    // Classes object of string
    char s1[25];
 
    // Parameterized Constructor
    AddString(char str1[])
    {
        // Initialize the string to class object
        strcpy(this->s1, str1);
    }
 
    // Overload Operator+ to concat the string
    void operator+(AddString &a2)
    {
        cout << "Concatenation: " << strcat(s1, a2.s1)<<endl;
    }
};
 
// Driver Code
int main()
{
    // Declaring two strings
    char str1[] = "Hello";
    char str2[] = "World";
 
    // Declaring and initializing the class
    // with above two strings
    AddString a1(str1),a2(str2);
 
    // Call operator function
    a1+a2;
    return 0;
}