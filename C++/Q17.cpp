//17.	Write a Program to make a Simple Calculator using the concept of classes
#include <iostream>
using namespace std;
class Calculator{
    private:
        float a, b;
    public:
        Calculator(float a, float b){
            this->a = a;
            this->b = b;
        }
        float add(){
            return a + b;
        }
        float subtract(){
            return a - b;
        }
        float multiply(){
            return a * b;
        }
        float divide(){
            return a / b;
        }
        ~Calculator(){
            cout<<"Destructor Called"<<endl;
        }
};
int main(){
    float a, b;
    int ch;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    Calculator c(a, b);
    cout<<"MENU : "<<endl<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5.Exit"<<endl<<"Enter your choice: ";
    cin>>ch;
    do{
        switch(ch){
            case 1:
                cout<<"Addition of "<<a<<" and "<<b<<" is: "<<c.add()<<endl;
                break;
            case 2:
                cout<<"Subtraction of "<<a<<" and "<<b<<" is: "<<c.subtract()<<endl;
                break;
            case 3:
                cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<c.multiply()<<endl;
                break;
            case 4:
                cout<<"Division of "<<a<<" and "<<b<<" is: "<<c.divide()<<endl;
                break;
            case 5:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
        cout<<"MENU : "<<endl<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Divide"<<endl<<"5.Exit"<<endl<<"Enter your choice: ";
        cin>>ch;
    }while(ch != 5);
    cout<<"Exiting..."<<endl;
    return 0;
}