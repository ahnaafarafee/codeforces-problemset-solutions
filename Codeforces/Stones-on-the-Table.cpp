#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/266/A

int main()
{
    int n, count = 0;
    string s;

    cin >> n;

    cin >> s;

    for (int j = 0; j < s.length(); j++)
    {
        if (s[j] == s[j + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}