#include<iostream>
using namespace std;

class b1{
    public:
    void greet(){
        cout<<"HOW ARE YOU ?"<<endl;
    }
};
class b2{
    public:
    void greet(){
        cout<<"KAISE HO ?"<<endl;
    }
};

class derived : public b1 , public b2{

int a;
public:
void greet(){
    b1::greet(); // iska matlb h apn ne isko bata diya ki tumhe yeh vala function call karna h jab derived class ke greet ko bulae
    
}
};

int main(){
    b1 c;
    c.greet();
    b2 d;
    d.greet();
    derived e;
//e.greet();  it will ambiguity error means same name function is there and it doesnt know which one to call
    e.greet();
    return 0;
}

// jab derived class me apna function hota h uss naam ka toh vo apna function bolta h nhi toh vo basse class ka bolta h