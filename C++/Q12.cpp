//12. Write a Program to check weather a number is prime or not
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int flag = 0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"Number is Prime";
    }
    else{
        cout<<"Number is not Prime";
    }
    return 0;
}