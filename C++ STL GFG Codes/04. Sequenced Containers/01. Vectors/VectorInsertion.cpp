#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> VecRet(int arr[], int n)
{
    vector<int> v(arr, arr + n);
    return v;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v = VecRet(arr, n);
    for (auto it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";
    return 0;
}