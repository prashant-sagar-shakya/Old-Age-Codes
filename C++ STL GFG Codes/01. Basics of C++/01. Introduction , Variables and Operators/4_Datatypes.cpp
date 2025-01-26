#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5;
    float b = 2.0;
    double c = 3.567;
    string d = "Prashant";
    long long l = 587;
    cout << b / c << endl;
    cout << b / a << endl;
    cout << static_cast<int>(c) / a << endl;
    cout << static_cast<int>(c) / a + l << endl;
    cout << d << endl;
    cout << d[4];
    return 0;
}