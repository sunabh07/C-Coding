#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with same name as the class. It is used to initalize objects of its class. It is automatically invoked
    complex(); // constructor declaration
    void print()
    {
        cout << "The complex no. is " << a << "+" << b << "i" << endl;
    }
};
complex ::complex()
{ // default constructor as it takes no parameters
    a = 10;
    b = 0;
}
int main()
{
    complex c;
    c.print();
    return 0;
}


// Characteristics of the constructors
// 1. it should be declared in the public section of the class
// 2. do not have return type

