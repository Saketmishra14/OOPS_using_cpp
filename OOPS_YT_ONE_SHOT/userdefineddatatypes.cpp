#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;
    int age;
};
int main(){
    student s1;
    cout<<"enter name-:";
      getline(cin,s1.name);
    s1.rno=63;
    s1.gpa=7.6;
    s1.age=19;
    student s2;
    s2.name="ayush shukla";
    s2.rno=20;
    s2.gpa=8.2;
    s2.age=20;
      

      cout<<"name of the student is:-"<<s1.name <<" age:-"<<s2.age;


}