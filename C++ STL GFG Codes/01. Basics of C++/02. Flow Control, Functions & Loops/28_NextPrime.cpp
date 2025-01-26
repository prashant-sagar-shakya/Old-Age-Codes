#include <bits/stdc++.h>
using namespace std;
bool check(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    while (true)
    {
        n++;
        if (check(n) == true)
            break;
    }
    cout << n << "\n";
    return 0;
}