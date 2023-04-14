#include<iostream>
using namespace std;

// forward declaration
class complex;
 
class calcu{
     public:
   
     void sumreal(complex,complex);

} ;

class complex{
    int a,b;
   // friend void calcu::sumreal(complex,complex); // individually declaring as frineds.
    // alter - declaring the calculator class as friend
     friend class calcu;
    public:
    void set(int n1,int n2){
        a=n1;
        b=n2;

    }

};
void calcu :: sumreal(complex o1,complex o2){
    cout<<(o1.a + o2.a)<<endl;
}

int main (){
complex a,b;
a.set(3,5);
b.set(3,5);
calcu c;
c.sumreal(a,b);
return 0;
}

