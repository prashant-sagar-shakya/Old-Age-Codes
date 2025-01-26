#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <deque>
#include <fstream>
using namespace std;

class User
{
private:
    string name;

public:
    User()
    {
        this->name = "Default";
    }
    void display()
    {
        cout << name;
    }
};
int main()
{
    User u;
    u.display();
    return 0;
}