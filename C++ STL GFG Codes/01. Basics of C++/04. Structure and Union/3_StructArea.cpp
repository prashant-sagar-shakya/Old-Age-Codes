#include <bits/stdc++.h>
using namespace std;
struct area
{
    int side;
    int le;
    int wd;
};
void Area(area &a)
{
    cout << a.side * a.side << "\n"
         << a.le * a.wd;
}
int main()
{
    area A;
    cin >> A.side >> A.le >> A.wd;
    Area(A);
    return 0;
}