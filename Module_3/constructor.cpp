#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    // Student(int r, int c, double g) // Constructor
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
    Student(int roll, int cls, double gpa) // Constructor
    {
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
        // same thing
        this->roll = roll; // here -> means dereference and access
        this->cls = cls;
        this->gpa = gpa;
    }
};
int main()
{
    Student shahid(99, 6, 4.61);
    Student ruma(40, 5, 4.44);

    cout << shahid.roll << " " << shahid.cls << " " << shahid.gpa << endl;
    cout << ruma.roll << " " << ruma.cls << " " << ruma.gpa << endl;

    return 0;
}