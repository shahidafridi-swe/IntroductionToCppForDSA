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
        string s;
        cin >> s;
        int count_array[26] = {0};
        for (int i = 0; i < n; i++)
        {
            if (count_array[s[i] - 'A'] == 0)
            {
                count_array[s[i] - 'A'] += 2;
            }
            else
            {
                count_array[s[i] - 'A']++;
            }
        }
        int sum = 0;
        for (int i = 0; i < 26; i++)
        {
            sum += count_array[i];
        }
        cout << sum << endl;
    }
    return 0;
}