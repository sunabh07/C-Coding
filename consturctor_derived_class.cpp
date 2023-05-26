#include<iostream>
using namespace std;

/*
we can use constructors in derived class.
If base class constructor does not have any agruments , there is no need of any constructor in derived class.
but if there are then derived class will need to pass arguments to the base class constructor.
If both have constructor then base class constructor will be called first.

*/


/*
ORDER OF EXECUTION :
class A : class B
B() then A()

class A : class B , class C
B(),C(),A()

class A : class B , virtual class C
C(),B(),A()

*/

class A{
    int a,b;
    public:
    A(int n1,int n2){
        a=n1;
        b=n2;
    }
    void print(){
        cout<<" the number of base class are "<<a<<" and "<<b<<endl;
    }
};

class B:public A{
  int c,d;
  public:
  B(int n1,int n2,int n3,int n4):A( n1 ,n2){
    c=n3;
    d=n4;

  }
  void disp(){
    print();
    cout<<" the numbers are "<<c<<" and "<<d<<endl;
  }

};
int main(){
    B z(1,2,3,4);
    z.disp();
    return 0;
}