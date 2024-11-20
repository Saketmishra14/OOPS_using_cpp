#include<iostream>
using namespace std;
class student{
    public:
    string name;
   
    float gpa;
    int age;
   

    student(){
                       //THIS IS DEFAULT CONSTRUCTOR.
    }

    student(string n,float g, int a){     //PARAMATERISED CONSTRUCTOR=made by me.
        name=n;
        gpa=g;
        age=a;
      
    }
    student(float g,string n, int a){     //PARAMATERISED CONSTRUCTOR=made by me.
        name=n;
       
        gpa=g;
        age=a;
      
    }
    student(int a,float g ){     //PARAMATERISED CONSTRUCTOR=made by me.
        gpa=g;
        age=a;
      
    }
};
int main(){
    student s1("saket mishra",7.6,19);
    student s2;
    s2.name="ayush shukla";
    s2.gpa=8.2;
    s2.age=20;
    student s3(24,8.9);
    student s4(6.7,"saket",45);
    student s5=s1;//deep copy
      

      cout<<s1.name<<" "<<s1.gpa<<" "<<s1.age<<endl;
      cout<<s5.name<<" "<<s5.gpa<<" "<<s5.age<<endl;
     cout<<s2.name<<" "<<s2.gpa<<" "<<s2.age<<endl;
     cout<<s3.name<<" "<<s3.gpa<<" "<<s3.age<<endl;
     cout<<s4.name<<" "<<s4.gpa<<" "<<s4.age<<endl;


}