#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(i + 1);
    for (auto it = v.begin(); it != v.end(); it++)
        cout << (*it) << " ";
    return 0;
}