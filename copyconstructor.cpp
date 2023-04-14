#include <iostream>
using namespace std;

class number

{
private:
    int a;

public:
    number()
    {
        a = 0;
    }

    number(int z)
    {
        a = z;
    }

    number(number &obj)
    { // copy constructor (it means an object should exactly resemble another object)
        cout << "the copy constructor is called" << endl;
        a = obj.a;
    }
    void disp()
    {

        cout << "the number is " << a << endl;
    }
};

int main()
{
    number p, q, r(45),y;
    p.disp();
    q.disp();
    r.disp();
    number r1(r);
    r1.disp();
    y=r; // copy constructor not called
    number b=r; // copy constructor will be invoked


    return 0;
}

// compiler gives a default constructor to every class
// if we remove the constructor then also copy constructor will work but the cout of copy constructor will no be displayed
// agr same line me apn object bana ke usko dusre object k assign karte h toh copy costructor invoke hota h