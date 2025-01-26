#include <bits/stdc++.h>
using namespace std;
bool isprime(int &n)
{
    if (n <= 1)
        return false;
    else if (n == 2 || n == 3)
        return true;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i < n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    for (int i = 0; i < n; i++)
    {
        int idx = i + 1;
        if (isprime(idx) && isprime(v[i]))
            cout << v[i] << " ";
    }
    return 0;
}