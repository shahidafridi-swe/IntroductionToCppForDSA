#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
};


int main()
{
    int n;
    cin >> n;
    Student a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id;
    }

    for(int i=0, j=n-1; i<j; i++, j--)
    {
        swap(a[i].s, a[j].s);
    }

    for(int i=0; i<n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }
    return 0;
}