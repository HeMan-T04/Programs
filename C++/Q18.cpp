//18.	Write a Menu Driven Program to Add,Subtract, Multiply two matrices of order 2X2 using concepts of Object Oriented Programming.
#include <iostream>
using namespace std;
class Matrix{
    private:
        int a[2][2];
    public:
        Matrix(){
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    a[i][j] = 0;
                }
            }
        }
        void setMatrix(){
            cout<<"Enter the elements of the matrix: "<<endl;
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    cin>>a[i][j];
                }
            }
        }
        void displayMatrix(){
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix add(Matrix m){
            Matrix temp;
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    temp.a[i][j] = a[i][j] + m.a[i][j];
                }
            }
            return temp;
        }
        Matrix subtract(Matrix m){
            Matrix temp;
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    temp.a[i][j] = a[i][j] - m.a[i][j];
                }
            }
            return temp;
        }
        Matrix multiply(Matrix m){
            Matrix temp;
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    temp.a[i][j] = 0;
                    for(int k = 0; k < 2; k++){
                        temp.a[i][j] += a[i][k] * m.a[k][j];
                    }
                }
            }
            return temp;
        }
};
int main(){
    int ch;
    Matrix m1, m2, m3;
    m1.setMatrix();
    m2.setMatrix();
    cout<<"MENU : "<<endl<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
    cin>>ch;
    do{
        switch(ch){
            case 1:
                m3 = m1.add(m2);
                cout<<"Addition of the matrices is: "<<endl;
                m3.displayMatrix();
                break;
            case 2:
                m3 = m1.subtract(m2);
                cout<<"Subtraction of the matrices is: "<<endl;
                m3.displayMatrix();
                break;
            case 3:
                m3 = m1.multiply(m2);
                cout<<"Multiplication of the matrices is: "<<endl;
                m3.displayMatrix();
                break;
            case 4:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
        cout<<"MENU : "<<endl<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiply"<<endl<<"4. Exit"<<endl<<"Enter your choice: ";
        cin>>ch;
    }while(ch != 4);
    cout<<"Exiting..."<<endl;
    return 0;
}