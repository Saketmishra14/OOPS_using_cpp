#include<iostream>
using namespace std;
class car{
    public:
    string cname;
    int price;
    string model;
    int seats;
};
void print(car c){
     cout<<c.cname<< " "<<c.model<<" "<<c.price<<" "<<c.seats<<endl;
}

int main(){

    car c1;
    c1.cname="maruti ";
    c1.model="suzuki";
    c1.price=12000000;
    c1.seats=6;
    print(c1);
}