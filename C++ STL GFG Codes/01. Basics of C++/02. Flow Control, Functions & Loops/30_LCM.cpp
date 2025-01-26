#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int d = max(a, b), lcm = a * b;
    for (int i = d; i <= lcm; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    cout << lcm << "\n";
    return 0;
}