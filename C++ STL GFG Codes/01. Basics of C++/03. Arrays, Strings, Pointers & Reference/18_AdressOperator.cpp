#include <bits/stdc++.h>
using namespace std;
void print(int *n)
{
    cout << *n;
}
int main()
{
    int n;
    cin >> n;
    print(&n);
    return 0;
}