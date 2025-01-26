#include <bits/stdc++.h>
using namespace std;
pair<int, int> MaxPair(int arr[], int n)
{
    sort(arr, arr + n);
    return pair<int, int>(arr[n - 1], arr[n - 2]);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    pair<int, int> p = MaxPair(arr, n);
    cout << p.first << " " << p.second << endl;
    return 0;
}