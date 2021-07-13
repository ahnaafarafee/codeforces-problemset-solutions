#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/266/B

int main()
{

    int n, t;
    string s;

    cin >> n >> t;

    cin >> s;

    for (int j = 0; j < t; j++)
    {

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}