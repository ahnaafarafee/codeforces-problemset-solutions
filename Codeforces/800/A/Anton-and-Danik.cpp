#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/734/A

int main()
{
    int n, a = 0, d = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }

    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}