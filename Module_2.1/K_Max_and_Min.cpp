#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[3];
    for(int i=0; i<3; i++)
    {
        cin >> ar[i];
    }

    int mx=ar[0];
    int mn=ar[0];

    for(int i=1; i<3; i++)
    {
        mx = max(mx, ar[i]);
        mn = min(mn, ar[i]);
    }
    
    cout << mn << " " << mx;
}