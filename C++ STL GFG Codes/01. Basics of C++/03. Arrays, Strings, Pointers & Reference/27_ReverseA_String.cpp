#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string n = "";
    int l = s.length();
    while (l >= 0)
    {
        n += s[l];
        l--;
    }
    cout << n;
    return 0;
}