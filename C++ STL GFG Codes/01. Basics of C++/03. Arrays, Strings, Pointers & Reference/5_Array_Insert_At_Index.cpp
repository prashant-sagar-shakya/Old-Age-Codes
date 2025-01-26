#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int x, ind;
    cin >> x >> ind;
    arr[ind] = x;
    for (int x : arr)
        cout << x << " ";
    return 0;
}