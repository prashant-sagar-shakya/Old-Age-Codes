#include <bits/stdc++.h>
using namespace std;
vector<int> SortVector(vector<int> &v)
{
    sort(v.begin(), v.end());
    return v;
}
vector<int> ReverseVector(vector<int> v)
{
    reverse(v.begin(), v.end());
    return v;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(i + 1);
    vector<int> v1 = SortVector(v);
    vector<int> v2 = ReverseVector(v);
    for (const auto x : v1)
        cout << x << " ";
    cout << endl;
    for (const auto x : v2)
        cout << x << " ";
    return 0;
}