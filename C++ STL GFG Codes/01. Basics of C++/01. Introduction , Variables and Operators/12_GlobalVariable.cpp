#include <bits/stdc++.h>
using namespace std;
int g = 10;
int setter(int x)
{
    return x;
}
void getter(int g)
{
    cout << setter(g);
}
int main()
{
    getter(g);
    return 0;
}