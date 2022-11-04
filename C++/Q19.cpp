//19. Write a Program to show the concept of Scope Resolution and Scope of Variables
#include <iostream>
using namespace std;
int a = 10;
int main(){
    int a = 20;
    {
        int a = 30;
        cout<<"Value of a inside a block in a is: "<<a<<endl;
    }
    cout<<"Value of a in main() is: "<<a<<endl;
    cout<<"Value of a declared globally is: "<<::a<<endl;
    return 0;
}   