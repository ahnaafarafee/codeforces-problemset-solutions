#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1374/A

int main()
{
    /*
    // ans correct buy time limit exceeded

    int t, x, y, n, store = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> n;

        for (int j = 0; j <= n; j++)
        {
            if (j % x == y)
            {
                store = j;
            }
        }

        cout << store << endl;
    }
    */

    //    n - n % x + y <= n

    int t, x, y, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> n;

        if (n - n % x + y <= n)
        {
            cout << n - n % x + y << endl;
        }
        else
        {
            cout << n - n % x - (x - y) << endl;
        }
    }

    return 0;
}