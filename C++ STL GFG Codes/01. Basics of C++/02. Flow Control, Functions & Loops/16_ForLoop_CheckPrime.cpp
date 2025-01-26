#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            cout << "Not Prime";
            return 0;
        }
    }
    cout << "Prime\n";
    return 0;
}