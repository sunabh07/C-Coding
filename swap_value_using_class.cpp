#include <iostream>
using namespace std;

class b;
//
class a
{
    int v;

public:
    void set(int z)
    {
        v = z;
    }
    void disp()
    {
        cout << v << endl;
    }
    friend void swap(a &, b &);
};

class b
{
    int r;

public:
    void set(int z)
    {
        r = z;
    }
    void disp()
    {
        cout << r << endl;
    }
    friend void swap(a &, b &);
};

void swap(a &s, b &u)
{

    int t = s.v;
    s.v = u.r;
    u.r = t;
}
int main()
{
    a f;
    b d;
    f.set(5);
    d.set(3);
    swap(f, d);
    f.disp();
    d.disp();

    return 0;
}