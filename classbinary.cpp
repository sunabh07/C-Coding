#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read()
    {
        cin >> s;
    }
    void check()
    { // Checking if the string is binary or not
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0' && s[i] != '1')
            {
                cout << "Incorrect format" << endl;
                exit(0);
            }
        }
    }

    void ones()
    { // Taking one's complement
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                s[i] = '0';
            }
            else
            {
                s[i] = '1';
            }
        }
        cout << s << endl;
    }
};
int main()
{
    binary a;
    a.read();
    a.check();
    a.ones();
    return 0;
}