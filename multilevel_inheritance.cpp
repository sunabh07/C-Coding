#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set(int n)
    {
        roll_number = n;
    }
    void get()
    {
        cout << "Your roll number is " << roll_number << endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmark(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void getmark()
    {
        cout << "Your marks in maths and phsyics are " << maths << " and " << physics << " respectively " << endl;
    }
};

class result : public exam
{
    float percentage;

public:
    void display()
    {
        get();
        getmark();
        cout << "Your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result r;
    r.set(6);
    r.setmark(6.2, 3.5);
    r.display();
    return 0;
}