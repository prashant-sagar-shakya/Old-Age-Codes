#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    char b[size];
    for (int i = 0; i < size; i++)
        cin >> a[i];
    for (int i = 0; i < size; i++)
        cin >> b[i];
    pair<int, char> Parr[size];
    for (int i = 0; i < size; i++)
        Parr[i] = {a[i], b[i]};
    sort(Parr, Parr + size);
    for (int i = 0; i < size; i++)
        cout << Parr[i].second << " ";
    return 0;
}