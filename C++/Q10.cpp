//10. Write a Program to check weather a string is Palindrome or not
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int len = str.length();
    int flag = 0;
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout<<"String is Palindrome";
    }
    else{
        cout<<"String is not Palindrome";
    }
    return 0;
}