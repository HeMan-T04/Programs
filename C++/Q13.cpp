//13.Write a Program to convert Binary Number to Decimal Number
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Binary Number: ";
    cin>>num;
    int dec = 0;
    int i = 0;
    while(num>0){
        int rem = num%10;
        dec += rem*pow(2,i);
        num /= 10;
        i++;
    }
    cout<<"Decimal Number: "<<dec<<endl;
    return 0;
}