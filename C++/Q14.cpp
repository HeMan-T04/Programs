//14.	Write a Program to check weather a number is Armstrong or not
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum = 0;
    int temp = num;
    while(temp>0){
        int rem = temp%10;
        sum += pow(rem,3);
        temp /= 10;
    }
    if(sum==num){
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Number is not Armstrong";
    }
    return 0;
}