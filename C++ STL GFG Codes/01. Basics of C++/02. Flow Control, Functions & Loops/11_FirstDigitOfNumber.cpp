#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        if (n < 10)
            break;
        n /= 10;
    }
    cout << n;
    return 0;
}