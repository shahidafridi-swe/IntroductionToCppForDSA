#include <iostream>
#include <utility> // For Swap

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << a << " - " << b << endl;

    swap(a, b);

    cout << a << " - " << b << endl;
}