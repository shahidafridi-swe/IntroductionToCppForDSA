#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        (*this).name = name;
        (*this).age = age;
    }
};

int main()
{
    Person shahid("Shahid Afridi", 27);

    cout << shahid.name << " " << shahid.age << endl;

    return 0;
}