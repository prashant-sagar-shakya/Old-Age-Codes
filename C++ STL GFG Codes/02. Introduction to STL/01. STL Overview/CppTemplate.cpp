#include <bits/stdc++.h>
using namespace std;
template <typename T>
T Mymax(T a, T b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a = 5, b = 7;
    cout << Mymax<int>(a, b);
    return 0;
}