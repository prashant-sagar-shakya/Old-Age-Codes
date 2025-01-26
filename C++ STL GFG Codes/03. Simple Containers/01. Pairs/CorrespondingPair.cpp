#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size], b[size];
    for (int i = 0; i < size; i++)
        cin >> a[i];
    for (int j = 0; j < size; j++)
        cin >> b[j];
    pair<int, int> p1[size];
    for (int i = 0; i < size; i++)
        p1[i] = {a[i], b[i]};
    for (int i = 0; i < size; i++)
        cout << "(" << p1[i].first << "," << p1[i].second << ")"
             << " ";
    return 0;
}