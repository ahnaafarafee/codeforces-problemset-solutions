#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/281/A

int main()
{

    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0)
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}