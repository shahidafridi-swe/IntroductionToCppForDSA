#include<iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a%2==0)
    {
        cout << "Even" << endl ;
    }
    else
    {
        cout << "Odd" << endl;
    }

    // Ternary Operator
    a%2==0 ? cout << "Even" << endl : cout << "Odd" << endl;
    (a%2==0) ? cout << "Even" << endl : cout << "Odd" << endl;
}