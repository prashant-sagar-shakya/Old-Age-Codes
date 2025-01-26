#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <deque>
#include <fstream>
using namespace std;

class Cubiod
{
public:
    int len;
    int width;
    int height;

public:
    void display()
    {
        cout << len << " " << width << " " << height << endl;
    }
};
class CubiodVol : public Cubiod
{
public:
    void readInput(int l, int w, int h)
    {
        len = l;
        width = w;
        height = h;
    }
    void display()
    {
        cout << "Volume of cubiod is " << len * width * height << endl;
    }
};

int main()
{
    CubiodVol C;
    C.readInput(5, 10, 12);
    C.Cubiod::display();
    C.display();
    return 0;
}