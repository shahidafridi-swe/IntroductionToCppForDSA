#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int find=0;
    while(ss >> word)
    {
        if(word == "Jessica") 
        {
            find =1;
            break;
        }
        
    }
    (find == 0) ? cout << "NO": cout << "YES";

    return 0;
}