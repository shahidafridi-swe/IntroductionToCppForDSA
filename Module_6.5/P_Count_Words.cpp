// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    bool inside_word = false;
    int count = 0;
    for(char c:s)
    {
        if(isalpha(c))
        {
            if(inside_word==false) count++;
            inside_word = true;
        }
        else{
            inside_word = false;
        }
    }
    cout << count;
    return 0;
}





//Another Way

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     int count=0;
//     string word;
//     while(ss >> word)
//     {
//         for(char c:word){
//             if(c>= 'a' && c <='z' || c>='A' && c<='Z' ){
//                 count++;
//                 break;
//             }
//         }
//     }
//     cout << count;

    
//     return 0;
// }