#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <deque>
#include <fstream>
using namespace std;
void marks(int a)
{
    if (a < 0 || a > 100)
        throw(-1);
    else
        cout << "Marks of student is " << a;
}
int main()
{
    int a;
    cin >> a;
    try
    {
        marks(a);
    }
    catch (int i)
    {
        cout << i;
    }
    return 0;
}