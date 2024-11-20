#include<iostream>
using namespace std;
class overloading{
    public:                      //this is function overloading.
    void sum(int x,int y){
        cout<<x+y<<endl;
    }
    void sum(int x,int y,int z){
        cout<<x+y+z<<endl;
    }
    void sum(string a, string b){
        cout<<a+b;
    }
};
int main(){
    overloading a;
    a.sum(6,6);
    a.sum(7,3,5);
    a.sum("saket"," mishra");

}