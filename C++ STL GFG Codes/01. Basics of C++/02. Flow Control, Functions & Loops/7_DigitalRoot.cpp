#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (true)
    {
        int sum = 0;
        if (n <= 9)
            break;
        while (n > 0)
        {
            int last = n % 10;
            sum += last;
            n /= 10;
        }
        n = sum;
    }
    cout << n;
    return 0;
}