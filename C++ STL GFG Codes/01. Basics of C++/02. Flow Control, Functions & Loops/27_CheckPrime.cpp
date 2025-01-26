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
    cout << std::boolalpha << check(n);
    return 0;
}