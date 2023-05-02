#include <iostream>
using namespace std;
class employee
{
    int id;
    static int c; // yeh sirf class vale hi access kar skte h aur jo static vala h vo class ka counter h

public:
    void get()
    {
        cin >> id;
        c++;
    }
    void display()
    {
        cout << id << " " << c;
    }
};
int employee ::c;
int main()
{
    employee a, b, c;
    a.get();
    a.display();
    b.get();
    b.display();
    c.get();
    c.display();

    return 0;
}