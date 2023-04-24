#include <iostream>
using namespace std;

int count = 0; // Global variable
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object no." << count << endl;
    }
    ~num()
    { // destructor
        cout << "this is the time when my destructor is called for object no. " << count << endl;
        count--;
    }
};

int main()
{
    cout << " We are inside the main func." << endl;
    cout << " Creating first object" << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "creating 2 more objects" << endl;
        num n2, n3;
        cout << "exiting the block" << endl;
    }
    cout << "back to the main" << endl;
}

// jab object banega tb onstructor call ho jayega
// agr vo object ki jarurat nhi h aage toh destructor call hojayega aur uski memory ko free kardega
// destructor never takes an argument nor return anything