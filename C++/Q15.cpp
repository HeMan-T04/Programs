//15. Write a Program to calculate Simple Interest using the concept of classes
#include <iostream>
using namespace std;
class SimpleInterest{
    private:
        float principal;
        float rate;
        float time;
    public:
        SimpleInterest(float principal, float rate, float time){
            this->principal = principal;
            this->rate = rate;
            this->time = time;
        }
        float calculateSimpleInterest(){
            return (principal*rate*time)/100;
        }
        ~SimpleInterest(){
            cout<<"Destructor Called";
        }
};
int main(){
    float principal,rate,time;
    cout<<"Enter Principal: ";
    cin>>principal;
    cout<<"Enter Rate: ";
    cin>>rate;
    cout<<"Enter Time: ";
    cin>>time;
    SimpleInterest si(principal,rate,time);
    cout<<"Simple Interest: "<<si.calculateSimpleInterest()<<endl;
    return 0;
}