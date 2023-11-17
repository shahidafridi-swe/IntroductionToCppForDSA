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
Student * fun() // Here 'Student' is user defind data type
{ 
    Student * shahid = new Student(99, 6, 4.69); // Here 'Student' is user defind data type
    return shahid;
}
int main()
{
    Student * result = fun(); // Here 'Student' is user defind data type
    cout << result->roll << " " << result->cls << " " << result->gpa;
    delete result;
    return 0;
}