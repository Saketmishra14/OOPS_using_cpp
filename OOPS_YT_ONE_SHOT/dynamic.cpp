#include<iostream>
using namespace std;

class cricketer{
    public:
    string name;
    int runs;
    float average;

    cricketer(string n, int r,float a);
};

cricketer::cricketer(string n, int r,float a){
    name=n;
    runs=r;
    average=a;
    cout<<"hello world"<<endl;
}

 int main(){
    cricketer c1("virat",250000,87.9);
    cricketer* c2= new cricketer("rohit",54,333);
    cout<<c2->name<<" "<<c2->runs<<"  "<<c2->average<<endl;

    cout << c1.name << " " << c1.runs << " " << c1.average << "\n";



 }