#include <iostream>
#include <algorithm> // For min() max()

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int mn= min(a,b);
    int mx= max(a,b);

    cout << mn << " " << mx << endl;

    int n = min({a,b,c,d});
    int x = max({a,b,c,d});

    cout << n << " " << x << endl;
}