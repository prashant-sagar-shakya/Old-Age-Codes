#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, opt;
    cin >> a >> b >> opt;
    switch (opt)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    default:
        cout << "Invalid Operation";
    }
    return 0;
}