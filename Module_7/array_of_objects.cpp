#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    // Student a[n]; // Declare array of object
    Student * a = new Student[n]; // Declare array of dynamic objects
    
    for (int i = 0; i < n; i++)
    {
        cin.ignore(); //getchar();
        getline(cin, a[i].name); // Name with space
        cin >> a[i].roll >> a[i].marks;
        // cin >> a[i].name >> a[i].roll >> a[i].marks; //Name without space
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}
