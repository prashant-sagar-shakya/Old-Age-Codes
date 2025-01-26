#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int &y = n;
    y += 5;
    cout << n << " " << y;
    return 0;
}