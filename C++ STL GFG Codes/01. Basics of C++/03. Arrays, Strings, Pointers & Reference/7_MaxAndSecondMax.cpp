#include <bits/stdc++.h>
using namespace std;
int ArrMax(int arr[], int n)
{
    int base = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[base] < arr[i])
            base = i;
    }
    return base;
}
int SecMax(int arr[], int n)
{
    int large = ArrMax(arr, n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[large])
            if (arr[res] < arr[i])
            {
                res = i;
            }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = ArrMax(arr, n);
    int secmax = SecMax(arr, n);
    cout << arr[max] << " " << arr[secmax];
    return 0;
}