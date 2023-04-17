#include <iostream>
using namespace std;

// agr apn ko class ke private members ko access karna h toh apn friend fun use karege

class complex
{
    int a, b;

public:
    void set(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2); // yeh ek bahar ka fuunc h jisko permission h use karne ki   isko aap main ke andr call ni kar skte ho direct
    void disp()
    {
        cout << " the complex no is" << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.set(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    complex x, y, sum;
    x.set(3, 4);
    x.disp();
    y.set(1, 3);
    y.disp();
    sum = sumcomplex(x, y);
    sum.disp();
    return 0;
}

/*
properties of friend function
1. not in the scope of the function matlb function ka part ni h bss yeh permission deta h private members ko use karne ki
2. can be declared inside public or private in class
3. yeh members directly access ni kr skta, object_name.member_name se aap member ko access kar ske ho



*/