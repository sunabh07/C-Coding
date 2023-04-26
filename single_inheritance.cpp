#include <iostream>
using namespace std;

class base
{
    int a1;

public:
    int a2;
    void set()
    {
        a1 = 10;
        a2 = 20;
    }
    int get1()
    {
        return a1;
    }
    int get2()
    {
        return a2;
    }
};

class derived : public base
{
    int a3;

public:
    void process()
    {
        a3 = a2 * get1();   // or a3 = get2()*get1()  we have taken that because a2 is public so wee can use it directly in derived
    }
    void disp()
    {
        cout << "the value of a1 is " << get1() << endl;
        cout << "the value of a2 is " << a2 << endl;
        cout << "the value of a3 is " << a3 << endl;
    }
};

int main()
{
    derived d;
    d.set();   
    d.process();
    d.disp();
    return 0;
}

// we donot have acess of a1 thats why we use get1 function so that it can be accessible

