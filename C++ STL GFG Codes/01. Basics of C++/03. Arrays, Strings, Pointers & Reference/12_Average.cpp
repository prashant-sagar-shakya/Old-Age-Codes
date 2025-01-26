#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    double avg = sum / n;
    cout << avg;
    return 0;
}