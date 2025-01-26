#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <deque>
#include <fstream>
using namespace std;

class Student
{
public:
    int rollNo;
    Student(int roll = 0) : rollNo(roll) {}
};
class Test : public Student
{
public:
    int M1, M2, M3, M4, M5;
    void SetMarks(int m1, int m2, int m3, int m4, int m5)
    {
        M1 = m1;
        M2 = m2;
        M3 = m3;
        M4 = m4;
        M5 = m5;
    }
};
class Result : public Test
{
public:
    void Display()
    {
        int total = M1 + M2 + M3 + M4 + M5;
        int average = total / 5.0;
        cout << rollNo << " " << total << " " << average << endl;
    }
};
int main()
{
    Result R;
    R.rollNo = 1;
    R.SetMarks(10, 10, 10, 10, 10);
    R.Display();
    return 0;
}