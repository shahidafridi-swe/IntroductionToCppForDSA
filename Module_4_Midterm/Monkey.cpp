#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100005];
    while( cin.getline(s,100005))
    {
        long long int l = strlen(s);
        sort(s,s+l);

        for(long long int i=0; i<l; i++){
            if(s[i]==' ')
            {
                continue;
            }
            else{
                cout << s[i];
            }
        }
        cout << endl;
    }
   
    return 0;
}