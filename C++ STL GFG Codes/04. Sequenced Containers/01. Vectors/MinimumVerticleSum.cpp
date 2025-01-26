#include <bits/stdc++.h>
using namespace std;
void Print(vector<vector<int>> v, int no, int MaxSize)
{
    for (int i = 0; i < no; i++)
        v[i].resize(MaxSize);
    vector<int> vc;
    for (int i = 0; i < MaxSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < no; j++)
            sum += v[j][i];
        vc.push_back(sum);
    }
    cout << *min_element(vc.begin(), vc.end());
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            v[i].push_back(val);
        }
        vec.push_back(v[i].size());
    }
    int size = *max_element(vec.begin(), vec.end());
    Print(v, n, size);
    return 0;
}