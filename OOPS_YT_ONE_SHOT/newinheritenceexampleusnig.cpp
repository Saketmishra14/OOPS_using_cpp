#include<iostream>
using namespace std;
class vehicle{
    public:
    string brand="ford";
};
class twowhiler{
    public:
    int price=80000;

};
class child:public vehicle,twowhiler{           //multiple inheritence
    public:
    int seats=6;
};
class car:public vehicle{           //multi-level inheritence
    public:
    string model="mustang";
};
class truck:public car{
    public:
    string name="mahindra";

};
int main(){
    car c1;
    cout<<c1.brand<<" and model name is :"<<c1.model<<endl;
    truck t1;
    cout<<t1.name<<endl;
    child g1;
    cout<<g1.brand;

}