#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rno;
    float gpa;
    int age;
   

    student(){
                       //THIS IS DEFAULT CONSTRUCTOR.
    }

    student(string n, int r,float g, int a){     //PARAMATERISED CONSTRUCTOR=made by me.
        name=n;
        rno=r;
        gpa=g;
        age=a;
      
    }
};
int main(){
    student s1("saket mishra",63,7.6,19);

  s1.rno=54;
  
    student s2;
    s2.name="ayush shukla";
    s2.rno=20;
    s2.gpa=8.2;
    s2.age=20;
      

      cout<<s1.name<<" "<<s1.gpa<<" "<< s1.rno<<" "<<s1.age<<endl;
     
     cout<<s2.name<<" "<<s2.gpa<<" "<< s2.rno<<s2.age<<endl;


}