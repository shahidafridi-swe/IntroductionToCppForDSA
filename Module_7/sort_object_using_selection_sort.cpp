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
int main()
{
    int n;
    cin >> n;
    Student a[n]; // Declare array of object
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].marks < a[j].marks)
            {
                swap(a[i], a[j]);
            }
            if (a[i].marks == a[j].marks)
            {
                if (a[i].roll > a[j].roll)
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     int roll;
//     int marks;
// };
// int main()
// {
//     int n;
//     cin >> n;
//     Student a[n]; // Declare array of object
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].name >> a[i].roll >> a[i].marks;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i].roll > a[j].roll)
//             {
//                 swap(a[i], a[j]);
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
//     }

//     return 0;
// }
