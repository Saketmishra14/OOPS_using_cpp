#include<iostream>
using namespace std;
class access{
    public:
    string name;
    int rollno;
     access(string n,int r,float m){
        name=n;
        rollno=r;
        marks=m;  
    } 

    void display(){
        cout<<"name-:"<<name<<endl;
        cout<<"rollno-:"<<rollno<<endl;
        cout<<"marks-:"<<marks<<endl;
    }
    float getmarks(){       //Getter 
        return marks;
    }
    void setmarks(float m){    //setter
        marks=m;
    }
    private:
    float marks;
};
int main(){
    access a1("yash",55,98.999);
    access a2("saket",55,98.999);
    a1.display();
    a2.display();
    a1.setmarks(87.98);
    cout<<a1.getmarks();
}