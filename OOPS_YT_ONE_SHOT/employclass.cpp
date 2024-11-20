#include<iostream>
using namespace std;
class employ{
    public:
    string name;
    int id;
    float salary;

    employ(string n,int i,float s){
        name=n;
        id=i;
        salary=s;
         
    }
    void displayinfo(){
        cout<<"employ name -:"<<name<<endl;
        cout<<"employ id -:"<<id<<endl;
        cout<<"employ salary -:"<<salary;

    }
    
};
int main(){
    employ e1("saket",63,15000);
   e1.displayinfo();

}