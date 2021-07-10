#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/236/A

int main()
{
    string s;
    int count = 0;

    cin >> s;

    // let's sort the letter so that we can exclude counting two distinct chars
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    if (count % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}