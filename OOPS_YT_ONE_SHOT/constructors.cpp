#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    float gpa;
    int rno;

     Student(string n,float g, int r){
        name=n;
        gpa=g;
        rno=r;
    }
};
int main(){
    Student s1("yash mishra",7.6,63);
    Student s2("ayush shukla",8.3,20);
    cout<<s1.name<<" "<<s1.gpa<<" "<< s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<< s2.rno<<endl;
}