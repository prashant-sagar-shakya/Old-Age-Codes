#include <bits/stdc++.h>
using namespace std;
void transpose(int **arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[j][i] << " ";
        cout << "\n";
    }
}
int main()
{
    int n;
    cin >> n;
    int **arr;
    arr = new int *[n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    cout << endl;
    transpose(arr, n);
    return 0;
}