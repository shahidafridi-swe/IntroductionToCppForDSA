// Sort an Array of Objects of Student based on their marks (Highest marks first).
// If same marks for more than one student then sort them based on roll.
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student a, Student b) // Compare Function
{
    // Shortcut of below condition
    if (a.marks == b.marks)
        return a.roll < b.roll;
    else
        return a.marks > b.marks;
//------------------------------------
// This is the same thing of above
    // if(a.marks > b.marks)
    // {
    //     return true;
    // }
    // else if(a.marks < b.marks)
    // {
    //     return false;
    // }
    // else{
    //     // if(a.roll < b.roll){
    //     //     return true;
    //     // }
    //     // else{
    //     //     return false;
    //     // }
    //     return a.roll < b.roll; // Shortcut of above condition
    // }
}

int main()
{
    int n;
    cin >> n;
    Student a[n]; // Declare array of object
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a,a+n,cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

























// // Sort an Array of Objects of Student based on their marks (Highest marks first).

// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     int roll;
//     int marks;
// };
// bool cmp(Student a, Student b) // Compare Function
// {
//     // if(a.marks >= b.marks)
//     // {
//     //     return true;
//     // }
//     // else {
//     //     return false;
//     // }
//     return a.marks >= b.marks; // Shortcut of above condition
// }

// int main()
// {
//     int n;
//     cin >> n;
//     Student a[n]; // Declare array of object
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].name >> a[i].roll >> a[i].marks;
//     }

//     sort(a,a+n,cmp);

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
//     }

//     return 0;
// }
