#include <iostream>

using namespace std;

int main()
{
    cout << "Here we will learn, How to take 'Input'" << endl;

    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;

    char c;
    cin >> c;
    cout << c << endl;
    int ascii_of_c = c;
    cout << ascii_of_c <<endl;
    cout << c << " " << int(c) << endl; //Type Casting
}