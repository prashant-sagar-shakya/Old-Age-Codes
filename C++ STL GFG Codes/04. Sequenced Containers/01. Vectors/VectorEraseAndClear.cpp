#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, ele, op;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cin >> op;
    int pos1, pos2;
    // Clear all
    if (op == 1)
    {
        v.clear();
        if (v.empty() == true)
            cout << "Empty";
        else
            cout << "Not Empty";
    }
    // Erase at
    else if (op == 2)
    {
        cin >> pos1;
        v.erase(v.begin() + pos1);
    }
    // Erase in range
    else if (op == 3)
    {
        cin >> pos1;
        cin >> pos2;
        for (int i = pos1; i < pos2; i++)
            v.erase(v.begin() + i);
    }
    for (auto x : v)
        cout << x << " ";
    return 0;
}