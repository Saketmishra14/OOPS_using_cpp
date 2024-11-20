#include<iostream>
using namespace std;
class scooty{
    public:

    int speed;
    float milage;

};
class bike: public scooty{
    public:
    int price;
    int gears;

};
int main(){
    scooty s1;
    s1.speed=78;
    cout<<s1.speed<<endl;
    bike b1;
    b1.price=9000000;
    cout<<b1.price;
    
}