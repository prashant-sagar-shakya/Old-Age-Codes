#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (arr[0] < arr[1])
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";
    return 0;
}