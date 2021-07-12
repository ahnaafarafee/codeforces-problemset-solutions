#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/546/A

int main()
{
    int k, n, w, d, cost = 0;

    cin >> k >> n >> w;
    // 3, 17, 4
    for (int i = 1; i <= w; i++)
    {
        cost += i;
    }

    d = (cost * k) - n;

    if (d < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << d << endl;
    }

    return 0;
}