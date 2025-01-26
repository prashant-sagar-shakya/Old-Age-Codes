#include <bits/stdc++.h>
using namespace std;
void Print(int rolls[], int marks[], int codes[], int n)
{
    sort(rolls, rolls + n);
    for (int i = 0; i < n; i++)
        cout << rolls[i] << " ";
    cout << endl;
    sort(marks, marks + n);
    for (int i = 0; i < n; i++)
        cout << marks[i] << " ";
    cout << endl;
    sort(codes, codes + n);
    for (int i = 0; i < n; i++)
        cout << codes[i] << " ";
}
int main()
{
    int n;
    cin >> n;
    int rolls[n], marks[n], codes[n];
    for (int i = 0; i < n; i++)
        cin >> rolls[i];
    for (int i = 0; i < n; i++)
        cin >> marks[i];
    for (int i = 0; i < n; i++)
        cin >> codes[i];
    Print(rolls, marks, codes, n);
    return 0;
}