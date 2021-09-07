#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1512/A

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        int c1 = 0, c2 = 0;

        cin >> n;
        vector<int> a(n);

        for (int &e : a)
        {
            cin >> e;
        }

        vector<int> b = a;

        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[1])
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }

    return 0;
}
