#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 3, 5, 8, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}