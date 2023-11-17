#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int ar[5]; //Static Array
    int n;
    cin >> n;
    int *ar = new int[n]; // Dynamic Array
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}