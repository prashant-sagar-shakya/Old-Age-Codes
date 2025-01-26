#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <deque>
#include <fstream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    char x;
    cin >> x;
    cin >> b;
    switch (x)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
    {
        try
        {
            if (b == 0)
                throw string("inf");
            cout << a / b;
        }
        catch (string &e)
        {
            cout << e;
        }
    }
    break;
    default:
        cout << "Invalid Operation";
    }
    return 0;
}