#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> VectorOfPair(vector<int> v)
{
    vector<pair<int, int>> vec;
    int k = 0;
    for (int i = 0; i < v.size() - 1; i++, k += 2)
        vec.push_back({v[i + k], v[i + 1]});
    sort(vec.rbegin(), vec.rend());
    return vec;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n * 2; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    vector<pair<int, int>> V = VectorOfPair(v);
    for (int i = 0; i < n; i++)
        cout << "(" << V[i].second << "," << V[i].first << ") ";
    return 0;
}