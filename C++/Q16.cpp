//16. Write a Program to illustrate the concept of Static Member Data and Static Member Function
#include <iostream>
using namespace std;
class Student{
    private:
        int rollNo;
        static int count;
    public:
        Student(){
            count++;
        }
        void setRollNo(int rollNo){
            this->rollNo = rollNo;
        }
        int getRollNo(){
            return rollNo;
        }
        static int getCount(){
            return count;
        }
};
int Student::count = 0;  
int main(){
    Student s1;
    s1.setRollNo(1);
    Student s2;
    s2.setRollNo(2);
    Student s3;
    s3.setRollNo(3);
    cout<<"Roll No of Student 1: "<<s1.getRollNo()<<endl;
    cout<<"Roll No of Student 2: "<<s2.getRollNo()<<endl;
    cout<<"Roll No of Student 3: "<<s3.getRollNo()<<endl;
    cout<<"Total Number of Students: "<<Student::getCount()<<endl;
    return 0;
}
