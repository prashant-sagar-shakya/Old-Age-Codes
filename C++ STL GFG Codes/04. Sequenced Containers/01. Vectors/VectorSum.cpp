#include <bits/stdc++.h>
using namespace std;
int Sum(vector<int> &v)
{
    int sum = 0;
    for (auto it = v.begin(); it != v.end(); it++)
        sum += (*it);
    return sum;
}
int main()
{
    int sum = 0;
    vector<int> v{10, 20, 30};
    cout << Sum(v);
    return 0;
}