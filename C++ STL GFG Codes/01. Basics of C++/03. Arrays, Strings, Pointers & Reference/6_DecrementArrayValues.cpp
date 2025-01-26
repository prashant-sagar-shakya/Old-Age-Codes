#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int &x : arr)
        x--;
    for (int x : arr)
        cout << x << " ";
    return 0;
}