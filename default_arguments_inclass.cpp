#include<iostream>
using namespace std;

class simple{
      int a,b;
      public:
      simple(int c,int d=9){
        a=c;
        b=d;
      }
      void print(){
         cout<<"values are : "<<a<<" and "<<b<<endl;
      }

};

int main(){
   simple q(1,5);
   q.print();
   simple z(5);
   z.print();
    return 0;
}