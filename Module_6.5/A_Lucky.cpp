#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int s1=0;
        int s2=0;
        for(int i=0; i<3; i++)
        {
            s1 +=s[i];
        }
        for(int i=3; i<6; i++)
        {
            s2 +=s[i];
        }

        if(s1==s2) cout <<  "YES" << endl;
        else cout << "NO" << endl;

    }
    
    return 0;
}