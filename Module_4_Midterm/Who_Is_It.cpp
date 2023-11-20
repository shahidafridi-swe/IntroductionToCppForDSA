#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    char name[100];
    char section;
    int marks;
  
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student a,b,c;
        cin >> a.ID >> a.name >> a.section >> a.marks;
        cin >> b.ID >> b.name >> b.section >> b.marks;
        cin >> c.ID >> c.name >> c.section >> c.marks;

        if(a.marks>=b.marks && a.marks>=c.marks)
        {
            if(a.marks==b.marks && a.ID>b.ID){
                cout << b.ID << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
            else if(a.marks==c.marks && a.ID>c.ID){
                cout << c.ID << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
            else{
                cout << a.ID << " " << a.name << " " << a.section << " " << a.marks << endl;
            }

        }
        else if(b.marks>=a.marks && b.marks>=c.marks)
        {
            if(b.marks==a.marks && b.ID>a.ID){
                cout << a.ID << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
            else if(b.marks == c.marks && b.ID>c.ID){
                cout << c.ID << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
            else{
                cout << b.ID << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
        }
        else if(c.marks>=a.marks && c.marks>=b.marks)
        {
            if(c.marks==a.marks & c.ID>a.ID){
                cout << a.ID << " " << a.name << " " << a.section << " " << a.marks << endl;
            }
            else if(c.marks==b.marks && c.ID>b.ID){
                cout << b.ID << " " << b.name << " " << b.section << " " << b.marks << endl;
            }
            else{
                cout << c.ID << " " << c.name << " " << c.section << " " << c.marks << endl;
            }
        }
    }
    return 0;
}