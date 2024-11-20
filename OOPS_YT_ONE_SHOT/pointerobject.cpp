#include<iostream>
 using namespace std;
class myclass{
  public:
  int mynum;
  string mystring;
  void mymethod();

 
};

 void myclass::mymethod(){
    cout<<"hello world";

  }
int main(){
  myclass m1;
  m1.mynum=78;
  cout<<m1.mynum;
  m1.mymethod();

}