#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student shahid(99,6,4.69);
    Student * ruma = new Student(40,6,4.44);

    cout << ruma->roll << " " << ruma->cls << " " << ruma->gpa << endl;

    return 0;
}