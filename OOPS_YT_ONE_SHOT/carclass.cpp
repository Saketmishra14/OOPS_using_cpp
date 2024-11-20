#include<iostream>
using namespace std;
class car{
    public:
    string cname;
    int price;
    string model;
    int seats;

    car(){
        //This is default constructor.
    }

    car(string c,int p, string m,int s){
          cname=c;
          price=p;
          model=m;
          seats=s;
    }
};
void print(car c){
     cout<<c.cname<< " "<<c.model<<" "<<c.price<<" "<<c.seats<<endl;
}

int main(){

    car c1("fortuner",4000000,"new",8);
    
    print(c1);
}