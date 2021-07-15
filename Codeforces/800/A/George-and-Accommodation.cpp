#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/467/A

int main()
{
    int n, p, q, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;

        if (p + 1 < q)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}