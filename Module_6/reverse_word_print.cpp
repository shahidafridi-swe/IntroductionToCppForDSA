#include<bits/stdc++.h>
using namespace std;

void reverse_word_print(stringstream & ss)
{
    string word;
    if( ss >> word)
    {   
        reverse_word_print(ss);
        cout << word << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    reverse_word_print(ss);
    return 0;
}