#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *ar = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
    }
    return ar;
}

int main()
{
    int *ar = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}