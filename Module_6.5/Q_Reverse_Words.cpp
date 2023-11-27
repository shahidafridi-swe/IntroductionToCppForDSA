#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin , s);

    stringstream ss(s);
    string word;

    while(ss >> word)
    {
        for(int i = 0 , j=strlen(word-1);  i<j; i++, j--)
        {
            swap(word[i],word[j]);
        }
        cout << word;
    }

    return 0;
}