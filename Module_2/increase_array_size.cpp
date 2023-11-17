#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";
    cout << endl;
    delete[] a;
    a = new int[5]; // increasing size
    for (int i = 0; i < 3; i++)
        a[i] = b[i];
    delete[] b;
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    a[3] = 40;
    a[4] = 50;
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}