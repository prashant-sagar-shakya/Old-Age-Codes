#include <bits/stdc++.h>
using namespace std;
int freq(vector<int> v, int x)
{
    int res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
            res++;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int x;
    cin >> x;
    cout << freq(v, x);
    return 0;
}