#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<"Complex no. is "<<a<<"+i"<<b<<endl;
    }
    void sum(complex c,complex d){
        a=c.a + d.a;
        b=c.b + d.b;
    }


};

int main(){
    complex r,e,f;
    r.set(5,6);
    r.print();
    e.set(2,3);
    e.print();
    f.sum(r,e);
    f.print();
    return 0;
}