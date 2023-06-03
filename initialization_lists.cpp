#include<iostream>
using namespace std;

/*
syntax for initializing lists in constructor :

constructor(agument-list) : initialization-section
{
    asignment + other code;

} 

*/

class test{
    int a;
    int b;
    public:
    test(int i,int j):a(i),b(j)
    //test(int i,int j): a(i),b(i+j)
   // test(int i,int j): a(i),b(a+j)  // it will also run because a value will be available
    //test(int i,int j): b(j),a(i+b) // it will throw error because we have declared a first in private section 
    
    {
     
        cout<<"constructor initialization"<<endl;
        cout<<"value of a and b are "<<a<<","<<b<<endl;
    }


};
int main(){
    test t(3,9);

    return 0;
}

