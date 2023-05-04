#include <iostream>
#include <cmath>
using namespace std;

class simple_calculator
{
protected:
    int a;
    int b;

public:
    void set1(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    int add()
    {
        return (a + b);
    }
    int subtract()
    {
        return (a - b);
    }
    void get1()
    {
        cout << "The addition of 2 numbers is " << add() << endl;
        cout << "The subtraction of 2 numbers is " << subtract() << endl;
    }
};

class scientific_calculator
{
protected:
    int c, d;

public:
    void set2(int m1, int m2)
    {
        c = m1;
        d = m2;
    }
    int sine()
    {
        return (sin(c) + sin(d));
    }
    int cosi()
    {
        return (cos(d) + cos(c));
    }
    int power()
    {
        return pow(c, d);
    }
};

class hybrid_calculator : public simple_calculator, public scientific_calculator
{
public:
void display(){
    cout <<" The addition of 2 numbers is " << add() << endl;
    cout <<" The subtraction of 2 numbers is " << subtract() << endl;
    cout <<" The addition of sine of 2 numbers is "<<sine()<<endl;
    cout <<" The power of two number is "<<power()<<endl;
    cout <<" The addition of cosine of two numbers is "<<cosi()<<endl;

}

};

int main(){
    hybrid_calculator h;
    h.set1(5,7);
    h.set2(90,0);
    h.display();
    return 0;
}
