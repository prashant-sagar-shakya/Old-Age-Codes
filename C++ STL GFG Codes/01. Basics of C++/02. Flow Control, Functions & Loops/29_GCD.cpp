#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, gcd = 1;
    cin >> a >> b;
    int d = min(a, b);
    for (int i = 1; i <= d; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    cout << gcd << "\n";
    return 0;
}