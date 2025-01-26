#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 5)
        cout << "Greater than 5";
    else if (n == 5)
        cout << "Equal to 5";
    else
        cout << "Less than 5";
    return 0;
}