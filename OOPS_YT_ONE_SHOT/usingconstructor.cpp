#include<iostream>
using namespace std;
class car{
    string brand;
    string model;
    int year;

    public:
    car(string b, string m, int y){
      brand=b;
      model=m;
      year=y;
    }
    void displaydetail(){
        cout<<"brand-:"<<brand<<endl;
        cout<<"model-:"<<model<<endl;
        cout<<"year-:"<<year<<endl;
    }
};

int main(){
    car car2("suzuki",  "sedan",2015);
    car2.displaydetail();
}