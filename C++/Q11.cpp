//11. Write a Program to calculate sum and sum of squares of first 15 Even Numbers
#include <iostream>
using namespace std;
int main(){
    int sum = 0;
    int sumOfSquares = 0;
    for(int i=2;i<=30;i+=2){
        sum += i;
        sumOfSquares += i*i;
    }
    cout<<"Sum of first 15 Even Numbers: "<<sum<<endl;
    cout<<"Sum of squares of first 15 Even Numbers: "<<sumOfSquares<<endl;
    return 0;
}