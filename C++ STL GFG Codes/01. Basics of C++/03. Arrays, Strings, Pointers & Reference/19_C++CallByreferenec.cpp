#include <bits/stdc++.h>
using namespace std;
void call_by_ref(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    call_by_ref(&a, &b);
    cout << a << " " << b;
    return 0;
}