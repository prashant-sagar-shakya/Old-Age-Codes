#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <deque>
#include <fstream>
using namespace std;

class Object
{
    string name;
    int number;
    int height;

public:
    Object(string n, int num, int h) : name(n), number(num), height(h) {}
    void Display()
    {
        cout << name << " " << number << " " << height << endl;
    }
};
void ObjSwap(Object &O1, Object &O2)
{
    Object temp = O1;
    O1 = O2;
    O2 = temp;
}

int main()
{
    Object O1("Morty", 1234, 6);
    Object O2("Rick", 5678, 5);
    cout << "Before Swapping :-" << endl;
    O1.Display();
    O2.Display();
    ObjSwap(O1, O2);
    cout << "After Swapping :-" << endl;
    O1.Display();
    O2.Display();
    return 0;
}