#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <deque>
#include <fstream>
using namespace std;
class CollegeCourse
{
private:
    string CID;
    char g;
    int cr;

public:
    void SetCourse_ID(string CID)
    {
        this->CID = CID;
    }
    void setGrade(char grade)
    {
        this->g = grade;
    }
    void setCredit(int credit)
    {
        this->cr = credit;
    }
    int CalculateGP(char grade)
    {
        if (grade == 'A')
            return 10;
        else if (grade == 'B')
            return 9;
        else if (grade == 'C')
            return 8;
        else if (grade == 'D')
            return 7;
        else if (grade == 'E')
            return 6;
        else if (grade == 'F')
            return 5;
        else
            return -1;
    }
    float CalculateHP(int gp, int cr)
    {
        return cr * gp;
    }
    void display()
    {
        cout << CalculateGP(g) << " " << CalculateHP(CalculateGP(g), cr);
    }
};
int main()
{
    CollegeCourse C;
    C.SetCourse_ID("ABC");
    C.setGrade('A');
    C.setCredit(4);
    C.display();

    return 0;
}