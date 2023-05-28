#include<iostream>
using namespace std;

//class derived : visibility base 1, visibility base 2{
//
// }; 

class base1{
    protected:
    int b1;
    public:
    void set1(int a){
        b1=a;
    }
};
class base2{
protected:
int b2;
public:
void set2(int a){
    b2=a;
}

};

class derived : public base1,public base2{
public:
void disp(){
    cout<<"The value of b1 and b2 are "<<b1<<" "<<b2<<endl;
}
};

/*
   The derived class will look like this 
   b1 and b2 will be protected members
   set1 ,set2 and show will be public functions
*/

int main(){
    derived d;
    d.set1(8);
    d.set2(9);
    d.disp();
    return 0;
}