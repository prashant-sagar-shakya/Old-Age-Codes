#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, dig = 0;
    cin >> n;
    while (n != 0)
    {
        n /= 10;
        dig++;
    }
    cout << dig << endl;
    return 0;
}