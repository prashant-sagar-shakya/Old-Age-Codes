#include <bits/stdc++.h>
using namespace std;
int vol(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    int l, b, h;
    cin >> l >> b >> h;
    cout << vol(l, b, h);
    return 0;
}