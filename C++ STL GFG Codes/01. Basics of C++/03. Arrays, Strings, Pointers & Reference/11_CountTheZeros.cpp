#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, zero = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            zero++;
    }
    cout << zero;
    return 0;
}