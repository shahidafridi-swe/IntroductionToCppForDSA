// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int even = 0;
        if(n%2 ==0){
            for (int i = 0; i < n; i++)
            {
                if (ar[i] % 2 == 0)
                {
                    even++;
                }
            }
            cout << abs((n/2)-even) << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}