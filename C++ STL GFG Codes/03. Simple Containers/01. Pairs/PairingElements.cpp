#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    pair<int, int> p1[size];
    for (int i = 0; i < ceil((float)size / 2); i++)
        p1[i] = {arr[i], arr[size - i - 1]};
    for (int i = 0; i < ceil((float)size / 2); i++)
        cout << "(" << p1[i].first << "," << p1[i].second << ")"
             << " ";
    return 0;
}