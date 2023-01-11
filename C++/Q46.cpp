//Which type of inheritance is this? Illustrate this inheritance by writing a program assuming your own data members.
#include <iostream>
using namespace std;
class vehicle
{
    int wheels;
    int seats;
    int mileage;
    public:
    void getdata()
    {
        cout<<"Enter wheels: ";
        cin>>wheels;
        cout<<"Enter seats: ";
        cin>>seats;
        cout<<"Enter mileage: ";
        cin>>mileage;
    }
    void display()
    {
        cout<<"Wheels: "<<wheels<<endl;
        cout<<"Seats: "<<seats<<endl;
        cout<<"Mileage: "<<mileage<<endl;
    }
};
class light_motor: public vehicle
{
    char type[20];
    char fuel[20];
    public:
    void getdata()
    {
        vehicle::getdata();
        cout<<"Enter type: ";
        cin>>type;
        cout<<"Enter fuel: ";
        cin>>fuel;
    }
    void display()
    {
        vehicle::display();
        cout<<"Type: "<<type<<endl;
        cout<<"Fuel: "<<fuel<<endl;
    }
};
class gear_motor: public light_motor
{
    int price;
    public:
    void getdata(){
        light_motor::getdata();
        cout<<"Enter price: ";
        cin >> price;
    }
    void display(){
        light_motor::display();
        cout<<"Price for Gear Motor LMV: "<<price<<endl;
    }
};
class non_gear_motor: public light_motor
{
    int price;
    public:
    void getdata(){
        light_motor::getdata();
        cout<<"Enter price: ";
        cin >> price;
    }
    void display(){
        light_motor::display();
        cout<<"Price for Non Gear Motor LMV: "<<price<<endl;
    }
};
class heavy_motor: public vehicle
{
    char type[20];
    char fuel[20];
    public:
    void getdata()
    {
        vehicle::getdata();
        cout<<"Enter type: ";
        cin>>type;
        cout<<"Enter fuel: ";
        cin>>fuel;
    }
    void display()
    {
        vehicle::display();
        cout<<"Type: "<<type<<endl;
        cout<<"Fuel: "<<fuel<<endl;
    }
};
class passenger: public heavy_motor
{
    int price;
    public:
    void getdata(){
        heavy_motor::getdata();
        cout<<"Enter price: ";
        cin >> price;
    }
    void display(){
        heavy_motor::display();
        cout<<"Price for Passenger HMV: "<<price<<endl;
    }
};
class goods: public heavy_motor
{
    int price;
    public:
    void getdata(){
        cout<<"Enter price: ";
        cin >> price;
    }
    void display(){
        cout<<"Price for Goods HMV: "<<price<<endl;
    }
};
int main(){
    gear_motor g;
    non_gear_motor ng;
    passenger p;
    goods gd;
    cout<<"Enter details for Gear Motor LMV: "<<endl;
    g.getdata();
    cout<<"Enter details for Non Gear Motor LMV: "<<endl;
    ng.getdata();
    cout<<"Enter details for Passenger HMV: "<<endl;
    p.getdata();
    cout<<"Enter details for Goods HMV: "<<endl;
    gd.getdata();
    cout<<"Details for Gear Motor LMV: "<<endl;
    g.display();
    cout<<"Details for Non Gear Motor LMV: "<<endl;
    ng.display();
    cout<<"Details for Passenger HMV: "<<endl;
    p.display();
    cout<<"Details for Goods HMV: "<<endl;
    gd.display();
}