#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x,int y){
        a=x;
        b=y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    complex(){
        a=13;
        b=10;
    }
    void print()
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
   complex c(1,4);
   c.print();
   complex d(5);
   d.print();
   complex e;
   e.print();

    return 0;
}
