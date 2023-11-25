#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n;
    cin >> x >> n;
    long long int sum = 0;
    for(int i=2 ; i<=n ; i+=2)
    {
        sum = sum + pow(x*1.0,i*1.0);
    }
    cout << sum;

    return 0;
}