#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, i = 1;
    cin >> n1 >> n2;
    while (i <= 10)
    {
        cout << ((n1 * i) - (n2 * i)) << " ";
        i++;
    }
    cout << endl;
    return 0;
}