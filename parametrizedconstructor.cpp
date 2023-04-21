#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);
    void print()
    {
        cout << "The complex no. is " << a << "+" << b << "i" << endl;
    }
};
complex ::complex(int x, int y)  // parametrized constructor takes arguments
{
    a = x;
    b = y;
}
int main()
{ // Implicit call
    complex c(3, 6);
    c.print();
    // Explicit call
    complex d = complex(10, 20);
    d.print();

    return 0;
}
