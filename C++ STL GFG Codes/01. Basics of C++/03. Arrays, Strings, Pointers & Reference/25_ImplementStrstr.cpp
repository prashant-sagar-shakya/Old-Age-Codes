#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    char string[] = "geeksforgeeks";
    char target[] = "for";
    char *p = strstr(string, target);
    cout << p - string;
    return 0;
}