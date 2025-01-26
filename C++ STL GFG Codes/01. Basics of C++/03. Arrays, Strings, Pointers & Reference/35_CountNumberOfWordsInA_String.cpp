#include <bits/stdc++.h>
using namespace std;
int main()
{
    int word = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ' || i == 0)
            word++;
    }
    cout << word;
    return 0;
}