#include <bits/stdc++.h>
using namespace std;
struct height
{
    int feet;
    int inch;
};
void print(int *sum, int n)
{
    int max = *sum;
    for (int i = 0; i < n; i++)
    {
        if (max < *(sum + i))
            max = *(sum + i);
    }
    cout << max;
}
int main()
{
    int n;
    cin >> n;
    int sum[n];
    height H[n];
    for (int i = 0; i < n; i++)
    {
        cin >> H[i].feet >> H[i].inch;
        sum[i] = H[i].feet * 12 + H[i].inch;
    }
    print(sum, n);
    return 0;
}