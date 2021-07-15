#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/677/A

int main()
{
    int n, h, a, w = 0;

    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (a <= h)
        {
            w++;
        }
        else
        {
            w = w + 2;
        }
    }

    cout << w << endl;

    return 0;
}