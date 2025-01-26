#include <bits/stdc++.h>
using namespace std;
struct cn
{
    int real;
    int img;
};
int main()
{
    cn n1, n2;
    cin >> n1.real >> n1.img;
    cin >> n2.real >> n2.img;
    cout << (n1.real + n2.real) << " + " << (n1.img + n2.img) << "i";

    return 0;
}