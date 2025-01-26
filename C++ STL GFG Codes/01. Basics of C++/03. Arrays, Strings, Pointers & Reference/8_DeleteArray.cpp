#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    delete[] arr;
    while (sum > 10)
    {
        if (sum < 10)
            break;
        sum /= 10;
    }
    cout << sum;
    return 0;
}