#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 1, 7, 8, 9, 0, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ele;
    cin >> ele;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            cout << i;
            break;
        }
    }
    return 0;
}